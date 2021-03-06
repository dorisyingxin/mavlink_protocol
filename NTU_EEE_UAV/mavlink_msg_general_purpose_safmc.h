// MESSAGE GENERAL_PURPOSE_SAFMC PACKING

#define MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC 231

typedef struct __mavlink_general_purpose_safmc_t
{
 uint64_t usec; ///< Timer usage
 float find_drop; ///< payload dropping target find flag
 float find_land; ///< landing area find flag
 float cam_shutter; ///< camera shutter flag
 float uwb_good; ///< UWB healthy flag
 int32_t drop_x; ///< image pixel x axis
 int32_t drop_y; ///< image pixel y axis
} mavlink_general_purpose_safmc_t;

#define MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN 32
#define MAVLINK_MSG_ID_231_LEN 32

#define MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_CRC 202
#define MAVLINK_MSG_ID_231_CRC 202



#define MAVLINK_MESSAGE_INFO_GENERAL_PURPOSE_SAFMC { \
	"GENERAL_PURPOSE_SAFMC", \
	7, \
	{  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_general_purpose_safmc_t, usec) }, \
         { "find_drop", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_general_purpose_safmc_t, find_drop) }, \
         { "find_land", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_general_purpose_safmc_t, find_land) }, \
         { "cam_shutter", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_general_purpose_safmc_t, cam_shutter) }, \
         { "uwb_good", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_general_purpose_safmc_t, uwb_good) }, \
         { "drop_x", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_general_purpose_safmc_t, drop_x) }, \
         { "drop_y", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_general_purpose_safmc_t, drop_y) }, \
         } \
}


/**
 * @brief Pack a general_purpose_safmc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec Timer usage
 * @param find_drop payload dropping target find flag
 * @param find_land landing area find flag
 * @param cam_shutter camera shutter flag
 * @param uwb_good UWB healthy flag
 * @param drop_x image pixel x axis
 * @param drop_y image pixel y axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_general_purpose_safmc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t usec, float find_drop, float find_land, float cam_shutter, float uwb_good, int32_t drop_x, int32_t drop_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, uwb_good);
	_mav_put_int32_t(buf, 24, drop_x);
	_mav_put_int32_t(buf, 28, drop_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#else
	mavlink_general_purpose_safmc_t packet;
	packet.usec = usec;
	packet.find_drop = find_drop;
	packet.find_land = find_land;
	packet.cam_shutter = cam_shutter;
	packet.uwb_good = uwb_good;
	packet.drop_x = drop_x;
	packet.drop_y = drop_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif
}

/**
 * @brief Pack a general_purpose_safmc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec Timer usage
 * @param find_drop payload dropping target find flag
 * @param find_land landing area find flag
 * @param cam_shutter camera shutter flag
 * @param uwb_good UWB healthy flag
 * @param drop_x image pixel x axis
 * @param drop_y image pixel y axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_general_purpose_safmc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t usec,float find_drop,float find_land,float cam_shutter,float uwb_good,int32_t drop_x,int32_t drop_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, uwb_good);
	_mav_put_int32_t(buf, 24, drop_x);
	_mav_put_int32_t(buf, 28, drop_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#else
	mavlink_general_purpose_safmc_t packet;
	packet.usec = usec;
	packet.find_drop = find_drop;
	packet.find_land = find_land;
	packet.cam_shutter = cam_shutter;
	packet.uwb_good = uwb_good;
	packet.drop_x = drop_x;
	packet.drop_y = drop_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif
}

/**
 * @brief Encode a general_purpose_safmc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param general_purpose_safmc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_general_purpose_safmc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_general_purpose_safmc_t* general_purpose_safmc)
{
	return mavlink_msg_general_purpose_safmc_pack(system_id, component_id, msg, general_purpose_safmc->usec, general_purpose_safmc->find_drop, general_purpose_safmc->find_land, general_purpose_safmc->cam_shutter, general_purpose_safmc->uwb_good, general_purpose_safmc->drop_x, general_purpose_safmc->drop_y);
}

/**
 * @brief Encode a general_purpose_safmc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param general_purpose_safmc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_general_purpose_safmc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_general_purpose_safmc_t* general_purpose_safmc)
{
	return mavlink_msg_general_purpose_safmc_pack_chan(system_id, component_id, chan, msg, general_purpose_safmc->usec, general_purpose_safmc->find_drop, general_purpose_safmc->find_land, general_purpose_safmc->cam_shutter, general_purpose_safmc->uwb_good, general_purpose_safmc->drop_x, general_purpose_safmc->drop_y);
}

/**
 * @brief Send a general_purpose_safmc message
 * @param chan MAVLink channel to send the message
 *
 * @param usec Timer usage
 * @param find_drop payload dropping target find flag
 * @param find_land landing area find flag
 * @param cam_shutter camera shutter flag
 * @param uwb_good UWB healthy flag
 * @param drop_x image pixel x axis
 * @param drop_y image pixel y axis
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_general_purpose_safmc_send(mavlink_channel_t chan, uint64_t usec, float find_drop, float find_land, float cam_shutter, float uwb_good, int32_t drop_x, int32_t drop_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN];
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, uwb_good);
	_mav_put_int32_t(buf, 24, drop_x);
	_mav_put_int32_t(buf, 28, drop_y);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, buf, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, buf, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif
#else
	mavlink_general_purpose_safmc_t packet;
	packet.usec = usec;
	packet.find_drop = find_drop;
	packet.find_land = find_land;
	packet.cam_shutter = cam_shutter;
	packet.uwb_good = uwb_good;
	packet.drop_x = drop_x;
	packet.drop_y = drop_y;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, (const char *)&packet, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, (const char *)&packet, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_general_purpose_safmc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float find_drop, float find_land, float cam_shutter, float uwb_good, int32_t drop_x, int32_t drop_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, usec);
	_mav_put_float(buf, 8, find_drop);
	_mav_put_float(buf, 12, find_land);
	_mav_put_float(buf, 16, cam_shutter);
	_mav_put_float(buf, 20, uwb_good);
	_mav_put_int32_t(buf, 24, drop_x);
	_mav_put_int32_t(buf, 28, drop_y);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, buf, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, buf, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif
#else
	mavlink_general_purpose_safmc_t *packet = (mavlink_general_purpose_safmc_t *)msgbuf;
	packet->usec = usec;
	packet->find_drop = find_drop;
	packet->find_land = find_land;
	packet->cam_shutter = cam_shutter;
	packet->uwb_good = uwb_good;
	packet->drop_x = drop_x;
	packet->drop_y = drop_y;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, (const char *)packet, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC, (const char *)packet, MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE GENERAL_PURPOSE_SAFMC UNPACKING


/**
 * @brief Get field usec from general_purpose_safmc message
 *
 * @return Timer usage
 */
static inline uint64_t mavlink_msg_general_purpose_safmc_get_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field find_drop from general_purpose_safmc message
 *
 * @return payload dropping target find flag
 */
static inline float mavlink_msg_general_purpose_safmc_get_find_drop(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field find_land from general_purpose_safmc message
 *
 * @return landing area find flag
 */
static inline float mavlink_msg_general_purpose_safmc_get_find_land(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field cam_shutter from general_purpose_safmc message
 *
 * @return camera shutter flag
 */
static inline float mavlink_msg_general_purpose_safmc_get_cam_shutter(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field uwb_good from general_purpose_safmc message
 *
 * @return UWB healthy flag
 */
static inline float mavlink_msg_general_purpose_safmc_get_uwb_good(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field drop_x from general_purpose_safmc message
 *
 * @return image pixel x axis
 */
static inline int32_t mavlink_msg_general_purpose_safmc_get_drop_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field drop_y from general_purpose_safmc message
 *
 * @return image pixel y axis
 */
static inline int32_t mavlink_msg_general_purpose_safmc_get_drop_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Decode a general_purpose_safmc message into a struct
 *
 * @param msg The message to decode
 * @param general_purpose_safmc C-struct to decode the message contents into
 */
static inline void mavlink_msg_general_purpose_safmc_decode(const mavlink_message_t* msg, mavlink_general_purpose_safmc_t* general_purpose_safmc)
{
#if MAVLINK_NEED_BYTE_SWAP
	general_purpose_safmc->usec = mavlink_msg_general_purpose_safmc_get_usec(msg);
	general_purpose_safmc->find_drop = mavlink_msg_general_purpose_safmc_get_find_drop(msg);
	general_purpose_safmc->find_land = mavlink_msg_general_purpose_safmc_get_find_land(msg);
	general_purpose_safmc->cam_shutter = mavlink_msg_general_purpose_safmc_get_cam_shutter(msg);
	general_purpose_safmc->uwb_good = mavlink_msg_general_purpose_safmc_get_uwb_good(msg);
	general_purpose_safmc->drop_x = mavlink_msg_general_purpose_safmc_get_drop_x(msg);
	general_purpose_safmc->drop_y = mavlink_msg_general_purpose_safmc_get_drop_y(msg);
#else
	memcpy(general_purpose_safmc, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_GENERAL_PURPOSE_SAFMC_LEN);
#endif
}
