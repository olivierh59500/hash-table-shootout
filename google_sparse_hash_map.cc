#include <google/sparse_hash_map>
typedef google::sparse_hash_map<int, int> hash_t;
#define SETUP hash_t hash;
#define INSERT_INTO_HASH(key, value) hash.insert(hash_t::value_type(key, value))
#include "template.c"
