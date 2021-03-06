// MESSAGE UWB_POSITION_ESTIMATE PACKING

#define MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE 230

typedef struct __mavlink_uwb_position_estimate_t
{
 uint64_t usec; ///< Timestamp (microseconds, synced to UNIX time or since system boot)
 float x; ///< UWB X position
 float y; ///< UWB Y position
 float z; ///< UWB Z position
 float yaw; ///< Sensor yaw
 float vx; ///< velocity x
 float vy; ///< velocity y
 float target_x; ///< target desired indoor x
 float target_y; ///< target desired indoor y
 float target_z; ///< target desired indoor z
 float target_yaw; ///< target desired indoor yaw
 int32_t flight_mode; ///< target flight mode 3: takeoff, 1: path, 2: land
} mavlink_uwb_position_estimate_t;

#define MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN 52
#define MAVLINK_MSG_ID_230_LEN 52

#define MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_CRC 202
#define MAVLINK_MSG_ID_230_CRC 202



#define MAVLINK_MESSAGE_INFO_UWB_POSITION_ESTIMATE { \
	"UWB_POSITION_ESTIMATE", \
	12, \
	{  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uwb_position_estimate_t, usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uwb_position_estimate_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uwb_position_estimate_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uwb_position_estimate_t, z) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uwb_position_estimate_t, yaw) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uwb_position_estimate_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uwb_position_estimate_t, vy) }, \
         { "target_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uwb_position_estimate_t, target_x) }, \
         { "target_y", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uwb_position_estimate_t, target_y) }, \
         { "target_z", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uwb_position_estimate_t, target_z) }, \
         { "target_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_uwb_position_estimate_t, target_yaw) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_uwb_position_estimate_t, flight_mode) }, \
         } \
}


/**
 * @brief Pack a uwb_position_estimate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param x UWB X position
 * @param y UWB Y position
 * @param z UWB Z position
 * @param yaw Sensor yaw
 * @param vx velocity x
 * @param vy velocity y
 * @param target_x target desired indoor x
 * @param target_y target desired indoor y
 * @param target_z target desired indoor z
 * @param target_yaw target desired indoor yaw
 * @param flight_mode target flight mode 3: takeoff, 1: path, 2: land
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uwb_position_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t usec, float x, float y, float z, float yaw, float vx, float vy, float target_x, float target_y, float target_z, float target_yaw, int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, target_x);
	_mav_put_float(buf, 36, target_y);
	_mav_put_float(buf, 40, target_z);
	_mav_put_float(buf, 44, target_yaw);
	_mav_put_int32_t(buf, 48, flight_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#else
	mavlink_uwb_position_estimate_t packet;
	packet.usec = usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;
	packet.vx = vx;
	packet.vy = vy;
	packet.target_x = target_x;
	packet.target_y = target_y;
	packet.target_z = target_z;
	packet.target_yaw = target_yaw;
	packet.flight_mode = flight_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif
}

/**
 * @brief Pack a uwb_position_estimate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param x UWB X position
 * @param y UWB Y position
 * @param z UWB Z position
 * @param yaw Sensor yaw
 * @param vx velocity x
 * @param vy velocity y
 * @param target_x target desired indoor x
 * @param target_y target desired indoor y
 * @param target_z target desired indoor z
 * @param target_yaw target desired indoor yaw
 * @param flight_mode target flight mode 3: takeoff, 1: path, 2: land
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uwb_position_estimate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float x,float y,float z,float yaw,float vx,float vy,float target_x,float target_y,float target_z,float target_yaw,int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, target_x);
	_mav_put_float(buf, 36, target_y);
	_mav_put_float(buf, 40, target_z);
	_mav_put_float(buf, 44, target_yaw);
	_mav_put_int32_t(buf, 48, flight_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#else
	mavlink_uwb_position_estimate_t packet;
	packet.usec = usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;
	packet.vx = vx;
	packet.vy = vy;
	packet.target_x = target_x;
	packet.target_y = target_y;
	packet.target_z = target_z;
	packet.target_yaw = target_yaw;
	packet.flight_mode = flight_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif
}

/**
 * @brief Encode a uwb_position_estimate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uwb_position_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uwb_position_estimate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uwb_position_estimate_t* uwb_position_estimate)
{
	return mavlink_msg_uwb_position_estimate_pack(system_id, component_id, msg, uwb_position_estimate->usec, uwb_position_estimate->x, uwb_position_estimate->y, uwb_position_estimate->z, uwb_position_estimate->yaw, uwb_position_estimate->vx, uwb_position_estimate->vy, uwb_position_estimate->target_x, uwb_position_estimate->target_y, uwb_position_estimate->target_z, uwb_position_estimate->target_yaw, uwb_position_estimate->flight_mode);
}

/**
 * @brief Encode a uwb_position_estimate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uwb_position_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uwb_position_estimate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uwb_position_estimate_t* uwb_position_estimate)
{
	return mavlink_msg_uwb_position_estimate_pack_chan(system_id, component_id, chan, msg, uwb_position_estimate->usec, uwb_position_estimate->x, uwb_position_estimate->y, uwb_position_estimate->z, uwb_position_estimate->yaw, uwb_position_estimate->vx, uwb_position_estimate->vy, uwb_position_estimate->target_x, uwb_position_estimate->target_y, uwb_position_estimate->target_z, uwb_position_estimate->target_yaw, uwb_position_estimate->flight_mode);
}

/**
 * @brief Send a uwb_position_estimate message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param x UWB X position
 * @param y UWB Y position
 * @param z UWB Z position
 * @param yaw Sensor yaw
 * @param vx velocity x
 * @param vy velocity y
 * @param target_x target desired indoor x
 * @param target_y target desired indoor y
 * @param target_z target desired indoor z
 * @param target_yaw target desired indoor yaw
 * @param flight_mode target flight mode 3: takeoff, 1: path, 2: land
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uwb_position_estimate_send(mavlink_channel_t chan, uint64_t usec, float x, float y, float z, float yaw, float vx, float vy, float target_x, float target_y, float target_z, float target_yaw, int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, target_x);
	_mav_put_float(buf, 36, target_y);
	_mav_put_float(buf, 40, target_z);
	_mav_put_float(buf, 44, target_yaw);
	_mav_put_int32_t(buf, 48, flight_mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, buf, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, buf, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif
#else
	mavlink_uwb_position_estimate_t packet;
	packet.usec = usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.yaw = yaw;
	packet.vx = vx;
	packet.vy = vy;
	packet.target_x = target_x;
	packet.target_y = target_y;
	packet.target_z = target_z;
	packet.target_yaw = target_yaw;
	packet.flight_mode = flight_mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, (const char *)&packet, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, (const char *)&packet, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uwb_position_estimate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float x, float y, float z, float yaw, float vx, float vy, float target_x, float target_y, float target_z, float target_yaw, int32_t flight_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, yaw);
	_mav_put_float(buf, 24, vx);
	_mav_put_float(buf, 28, vy);
	_mav_put_float(buf, 32, target_x);
	_mav_put_float(buf, 36, target_y);
	_mav_put_float(buf, 40, target_z);
	_mav_put_float(buf, 44, target_yaw);
	_mav_put_int32_t(buf, 48, flight_mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, buf, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, buf, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif
#else
	mavlink_uwb_position_estimate_t *packet = (mavlink_uwb_position_estimate_t *)msgbuf;
	packet->usec = usec;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->yaw = yaw;
	packet->vx = vx;
	packet->vy = vy;
	packet->target_x = target_x;
	packet->target_y = target_y;
	packet->target_z = target_z;
	packet->target_yaw = target_yaw;
	packet->flight_mode = flight_mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, (const char *)packet, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE, (const char *)packet, MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE UWB_POSITION_ESTIMATE UNPACKING


/**
 * @brief Get field usec from uwb_position_estimate message
 *
 * @return Timestamp (microseconds, synced to UNIX time or since system boot)
 */
static inline uint64_t mavlink_msg_uwb_position_estimate_get_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from uwb_position_estimate message
 *
 * @return UWB X position
 */
static inline float mavlink_msg_uwb_position_estimate_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from uwb_position_estimate message
 *
 * @return UWB Y position
 */
static inline float mavlink_msg_uwb_position_estimate_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from uwb_position_estimate message
 *
 * @return UWB Z position
 */
static inline float mavlink_msg_uwb_position_estimate_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from uwb_position_estimate message
 *
 * @return Sensor yaw
 */
static inline float mavlink_msg_uwb_position_estimate_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vx from uwb_position_estimate message
 *
 * @return velocity x
 */
static inline float mavlink_msg_uwb_position_estimate_get_vx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vy from uwb_position_estimate message
 *
 * @return velocity y
 */
static inline float mavlink_msg_uwb_position_estimate_get_vy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field target_x from uwb_position_estimate message
 *
 * @return target desired indoor x
 */
static inline float mavlink_msg_uwb_position_estimate_get_target_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field target_y from uwb_position_estimate message
 *
 * @return target desired indoor y
 */
static inline float mavlink_msg_uwb_position_estimate_get_target_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field target_z from uwb_position_estimate message
 *
 * @return target desired indoor z
 */
static inline float mavlink_msg_uwb_position_estimate_get_target_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field target_yaw from uwb_position_estimate message
 *
 * @return target desired indoor yaw
 */
static inline float mavlink_msg_uwb_position_estimate_get_target_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field flight_mode from uwb_position_estimate message
 *
 * @return target flight mode 3: takeoff, 1: path, 2: land
 */
static inline int32_t mavlink_msg_uwb_position_estimate_get_flight_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  48);
}

/**
 * @brief Decode a uwb_position_estimate message into a struct
 *
 * @param msg The message to decode
 * @param uwb_position_estimate C-struct to decode the message contents into
 */
static inline void mavlink_msg_uwb_position_estimate_decode(const mavlink_message_t* msg, mavlink_uwb_position_estimate_t* uwb_position_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP
	uwb_position_estimate->usec = mavlink_msg_uwb_position_estimate_get_usec(msg);
	uwb_position_estimate->x = mavlink_msg_uwb_position_estimate_get_x(msg);
	uwb_position_estimate->y = mavlink_msg_uwb_position_estimate_get_y(msg);
	uwb_position_estimate->z = mavlink_msg_uwb_position_estimate_get_z(msg);
	uwb_position_estimate->yaw = mavlink_msg_uwb_position_estimate_get_yaw(msg);
	uwb_position_estimate->vx = mavlink_msg_uwb_position_estimate_get_vx(msg);
	uwb_position_estimate->vy = mavlink_msg_uwb_position_estimate_get_vy(msg);
	uwb_position_estimate->target_x = mavlink_msg_uwb_position_estimate_get_target_x(msg);
	uwb_position_estimate->target_y = mavlink_msg_uwb_position_estimate_get_target_y(msg);
	uwb_position_estimate->target_z = mavlink_msg_uwb_position_estimate_get_target_z(msg);
	uwb_position_estimate->target_yaw = mavlink_msg_uwb_position_estimate_get_target_yaw(msg);
	uwb_position_estimate->flight_mode = mavlink_msg_uwb_position_estimate_get_flight_mode(msg);
#else
	memcpy(uwb_position_estimate, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_UWB_POSITION_ESTIMATE_LEN);
#endif
}
