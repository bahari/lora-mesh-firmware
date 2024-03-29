/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_STOREFORWARD_PB_H_INCLUDED
#define PB_STOREFORWARD_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _StoreAndForwardMessage_RequestResponse {
    StoreAndForwardMessage_RequestResponse_UNSET = 0,
    StoreAndForwardMessage_RequestResponse_ROUTER_ERROR = 1,
    StoreAndForwardMessage_RequestResponse_ROUTER_HEARTBEAT = 2,
    StoreAndForwardMessage_RequestResponse_ROUTER_PING = 3,
    StoreAndForwardMessage_RequestResponse_ROUTER_PONG = 4,
    StoreAndForwardMessage_RequestResponse_ROUTER_BUSY = 5,
    StoreAndForwardMessage_RequestResponse_CLIENT_ERROR = 101,
    StoreAndForwardMessage_RequestResponse_CLIENT_HISTORY = 102,
    StoreAndForwardMessage_RequestResponse_CLIENT_STATS = 103,
    StoreAndForwardMessage_RequestResponse_CLIENT_PING = 104,
    StoreAndForwardMessage_RequestResponse_CLIENT_PONG = 105,
    StoreAndForwardMessage_RequestResponse_MAX = 255
} StoreAndForwardMessage_RequestResponse;

/* Struct definitions */
typedef struct _StoreAndForwardMessage_History {
    uint32_t HistoryMessages;
    uint32_t Window;
} StoreAndForwardMessage_History;

typedef struct _StoreAndForwardMessage_Statistics {
    uint32_t MessagesTotal;
    uint32_t MessagesSaved;
    uint32_t MessagesMax;
    uint32_t UpTime;
    uint32_t Requests;
    uint32_t RequestsHistory;
    bool Heartbeat;
    uint32_t ReturnMax;
    uint32_t ReturnWindow;
} StoreAndForwardMessage_Statistics;

typedef struct _StoreAndForwardMessage {
    StoreAndForwardMessage_RequestResponse rr;
    bool has_stats;
    StoreAndForwardMessage_Statistics stats;
    bool has_history;
    StoreAndForwardMessage_History history;
} StoreAndForwardMessage;


/* Helper constants for enums */
#define _StoreAndForwardMessage_RequestResponse_MIN StoreAndForwardMessage_RequestResponse_UNSET
#define _StoreAndForwardMessage_RequestResponse_MAX StoreAndForwardMessage_RequestResponse_MAX
#define _StoreAndForwardMessage_RequestResponse_ARRAYSIZE ((StoreAndForwardMessage_RequestResponse)(StoreAndForwardMessage_RequestResponse_MAX+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define StoreAndForwardMessage_init_default      {_StoreAndForwardMessage_RequestResponse_MIN, false, StoreAndForwardMessage_Statistics_init_default, false, StoreAndForwardMessage_History_init_default}
#define StoreAndForwardMessage_Statistics_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define StoreAndForwardMessage_History_init_default {0, 0}
#define StoreAndForwardMessage_init_zero         {_StoreAndForwardMessage_RequestResponse_MIN, false, StoreAndForwardMessage_Statistics_init_zero, false, StoreAndForwardMessage_History_init_zero}
#define StoreAndForwardMessage_Statistics_init_zero {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define StoreAndForwardMessage_History_init_zero {0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define StoreAndForwardMessage_History_HistoryMessages_tag 1
#define StoreAndForwardMessage_History_Window_tag 2
#define StoreAndForwardMessage_Statistics_MessagesTotal_tag 1
#define StoreAndForwardMessage_Statistics_MessagesSaved_tag 2
#define StoreAndForwardMessage_Statistics_MessagesMax_tag 3
#define StoreAndForwardMessage_Statistics_UpTime_tag 4
#define StoreAndForwardMessage_Statistics_Requests_tag 5
#define StoreAndForwardMessage_Statistics_RequestsHistory_tag 6
#define StoreAndForwardMessage_Statistics_Heartbeat_tag 7
#define StoreAndForwardMessage_Statistics_ReturnMax_tag 8
#define StoreAndForwardMessage_Statistics_ReturnWindow_tag 9
#define StoreAndForwardMessage_rr_tag            1
#define StoreAndForwardMessage_stats_tag         2
#define StoreAndForwardMessage_history_tag       3

/* Struct field encoding specification for nanopb */
#define StoreAndForwardMessage_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    rr,                1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  stats,             2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  history,           3)
#define StoreAndForwardMessage_CALLBACK NULL
#define StoreAndForwardMessage_DEFAULT NULL
#define StoreAndForwardMessage_stats_MSGTYPE StoreAndForwardMessage_Statistics
#define StoreAndForwardMessage_history_MSGTYPE StoreAndForwardMessage_History

#define StoreAndForwardMessage_Statistics_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   MessagesTotal,     1) \
X(a, STATIC,   SINGULAR, UINT32,   MessagesSaved,     2) \
X(a, STATIC,   SINGULAR, UINT32,   MessagesMax,       3) \
X(a, STATIC,   SINGULAR, UINT32,   UpTime,            4) \
X(a, STATIC,   SINGULAR, UINT32,   Requests,          5) \
X(a, STATIC,   SINGULAR, UINT32,   RequestsHistory,   6) \
X(a, STATIC,   SINGULAR, BOOL,     Heartbeat,         7) \
X(a, STATIC,   SINGULAR, UINT32,   ReturnMax,         8) \
X(a, STATIC,   SINGULAR, UINT32,   ReturnWindow,      9)
#define StoreAndForwardMessage_Statistics_CALLBACK NULL
#define StoreAndForwardMessage_Statistics_DEFAULT NULL

#define StoreAndForwardMessage_History_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   HistoryMessages,   1) \
X(a, STATIC,   SINGULAR, UINT32,   Window,            2)
#define StoreAndForwardMessage_History_CALLBACK NULL
#define StoreAndForwardMessage_History_DEFAULT NULL

extern const pb_msgdesc_t StoreAndForwardMessage_msg;
extern const pb_msgdesc_t StoreAndForwardMessage_Statistics_msg;
extern const pb_msgdesc_t StoreAndForwardMessage_History_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define StoreAndForwardMessage_fields &StoreAndForwardMessage_msg
#define StoreAndForwardMessage_Statistics_fields &StoreAndForwardMessage_Statistics_msg
#define StoreAndForwardMessage_History_fields &StoreAndForwardMessage_History_msg

/* Maximum encoded size of messages (where known) */
#define StoreAndForwardMessage_size              69
#define StoreAndForwardMessage_Statistics_size   50
#define StoreAndForwardMessage_History_size      12

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
