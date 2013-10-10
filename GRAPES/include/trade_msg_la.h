/** @file trade_msg_la.h
 *
 * Chunk Delivery API - Lower Abstraction
 *
 * The Chunk Delivery LA provides the primitives to encode the send operation of a Chunk to a target Peer and decode the Chunk reception from a Peer. The former returns a bit stream obteined by the encoding of the Chunk to send, it is the packet that will be sent. The latter decode a packet received, the bit stream, in the corresponding Chunk.
 *
 * @image html SOM_Internals.png "Data Exchange Protocol of the SOM module" width=50
 */
 
 /**
  * Encode a sequence of information, filling the buffer with the corresponding bit stream.
  * 
  * Encode a sequence of information given as parameters and fills a buffer (given as parameter) with the corresponding bit stream.
  * The main reason to encode a return the bit stream is the possibility to either send directly a packet with the encoded bit stream, or 
  * add this bit stream in piggybacking
  * 
  * @param[in] c Chunk to send 
  * @param[in] buff Buffer that will be filled with the bit stream obtained as a coding of the above parameters
  * @param[in] buff_len length of the buffer that will contain the bit stream
  * @return the lenght of the encoded bitstream (in bytes) on success, <0 on error
  */
int encodeChunk(const struct chunk *c, uint8_t *buff, int buff_len);

/**
  * Decode the bit stream contained int the buffer, filling the other parameters. This is the dual of the encode function.
  *  
  * @param[in] c Chunks that has been transmitted
  * @param[in] buff Buffer which contain the bit stream to decode, filling the above parameters
  * @param[in] buff_len length of the buffer that contain the bit stream
  * @return 0 on success, <0 on error
  */
int decodeChunk(struct chunk *c, const uint8_t *buff, int buff_len);
