struct nodeID;

struct nodeID *nodeid_dup(struct nodeID *s);
int nodeid_equal(const struct nodeID *s1, const struct nodeID *s2);

struct nodeID *create_node(const char *IPaddr, int port);
struct nodeID *net_helper_init(const char *IPaddr, int port);
int send_to_peer(const struct nodeID *from, const struct nodeID *to, const uint8_t *buffer_ptr, int buffer_size);
int recv_from_peer(const struct nodeID *local, struct nodeID **remote, uint8_t *buffer_ptr, int buffer_size);

int wait4data(const struct nodeID *n, struct timeval tout);

const char *node_addr(const struct nodeID *s);
struct nodeID *nodeid_undump(const uint8_t *b, int *len);
int nodeid_dump(uint8_t *b, const struct nodeID *s);
void nodeID_free(struct nodeID *s);
