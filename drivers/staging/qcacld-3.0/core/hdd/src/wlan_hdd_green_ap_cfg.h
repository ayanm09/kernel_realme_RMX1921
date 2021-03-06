/*
 * Copyright (c) 2012-2018 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifdef WLAN_SUPPORT_GREEN_AP

#define CFG_ENABLE_GREEN_AP_FEATURE         "gEnableGreenAp"
#define CFG_ENABLE_GREEN_AP_FEATURE_MIN     (0)
#define CFG_ENABLE_GREEN_AP_FEATURE_MAX     (1)
#define CFG_ENABLE_GREEN_AP_FEATURE_DEFAULT (1)
#define CFG_ENABLE_GREEN_AP_FEATURE_FIELD   bool enable_green_ap;
#define CFG_ENABLE_GREEN_AP_FEATURE_REG_VARIABLE \
	REG_VARIABLE(CFG_ENABLE_GREEN_AP_FEATURE, WLAN_PARAM_Integer,\
		     struct hdd_config, enable_green_ap,\
		     VAR_FLAGS_OPTIONAL | VAR_FLAGS_RANGE_CHECK_ASSUME_DEFAULT,\
		     CFG_ENABLE_GREEN_AP_FEATURE_DEFAULT,\
		     CFG_ENABLE_GREEN_AP_FEATURE_MIN,\
		     CFG_ENABLE_GREEN_AP_FEATURE_MAX),

/* Enhanced Green AP (EGAP) flags/params */
#define CFG_ENABLE_EGAP_ENABLE_FEATURE             "gEnableEGAP"
#define CFG_ENABLE_EGAP_ENABLE_FEATURE_MIN         (0)
#define CFG_ENABLE_EGAP_ENABLE_FEATURE_MAX         (1)
#define CFG_ENABLE_EGAP_ENABLE_FEATURE_DEFAULT     (1)
#define CFG_ENABLE_EGAP_ENABLE_FEATURE_FIELD       bool enable_egap;
#define CFG_ENABLE_EGAP_ENABLE_FEATURE_REG_VARIABLE \
	REG_VARIABLE(CFG_ENABLE_EGAP_ENABLE_FEATURE, WLAN_PARAM_Integer,\
		     struct hdd_config, enable_egap,\
		     VAR_FLAGS_OPTIONAL | VAR_FLAGS_RANGE_CHECK_ASSUME_DEFAULT,\
		     CFG_ENABLE_EGAP_ENABLE_FEATURE_DEFAULT,\
		     CFG_ENABLE_EGAP_ENABLE_FEATURE_MIN,\
		     CFG_ENABLE_EGAP_ENABLE_FEATURE_MAX),

#define CFG_ENABLE_EGAP_INACT_TIME_FEATURE         "gEGAPInactTime"
#define CFG_ENABLE_EGAP_INACT_TIME_FEATURE_MIN     (0)
#define CFG_ENABLE_EGAP_INACT_TIME_FEATURE_MAX     (300000)
#define CFG_ENABLE_EGAP_INACT_TIME_FEATURE_DEFAULT (2000)
#define CFG_ENABLE_EGAP_INACT_TIME_FEATURE_FIELD   uint32_t egap_inact_time;
#define CFG_ENABLE_EGAP_INACT_TIME_FEATURE_REG_VARIABLE \
	REG_VARIABLE(CFG_ENABLE_EGAP_INACT_TIME_FEATURE, WLAN_PARAM_Integer,\
		     struct hdd_config, egap_inact_time,\
		     VAR_FLAGS_OPTIONAL | VAR_FLAGS_RANGE_CHECK_ASSUME_DEFAULT,\
		     CFG_ENABLE_EGAP_INACT_TIME_FEATURE_DEFAULT,\
		     CFG_ENABLE_EGAP_INACT_TIME_FEATURE_MIN,\
		     CFG_ENABLE_EGAP_INACT_TIME_FEATURE_MAX),\

#define CFG_ENABLE_EGAP_WAIT_TIME_FEATURE          "gEGAPWaitTime"
#define CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_MIN      (0)
#define CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_MAX      (300000)
#define CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_DEFAULT  (150)
#define CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_FIELD    uint32_t egap_wait_time;
#define CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_REG_VARIABLE \
	REG_VARIABLE(CFG_ENABLE_EGAP_WAIT_TIME_FEATURE, WLAN_PARAM_Integer,\
		     struct hdd_config, egap_wait_time,\
		     VAR_FLAGS_OPTIONAL | VAR_FLAGS_RANGE_CHECK_ASSUME_DEFAULT,\
		     CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_DEFAULT,\
		     CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_MIN,\
		     CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_MAX),\

#define CFG_ENABLE_EGAP_FLAGS_FEATURE              "gEGAPFeatures"
#define CFG_ENABLE_EGAP_FLAGS_FEATURE_MIN          (0)
#define CFG_ENABLE_EGAP_FLAGS_FEATURE_MAX          (15)
#define CFG_ENABLE_EGAP_FLAGS_FEATURE_DEFAULT      (3)
#define CFG_ENABLE_EGAP_FLAGS_FEATURE_FIELD        uint32_t egap_feature_flag;
#define CFG_ENABLE_EGAP_FLAGS_FEATURE_REG_VARIABLE \
	REG_VARIABLE(CFG_ENABLE_EGAP_FLAGS_FEATURE, WLAN_PARAM_Integer,\
		     struct hdd_config, egap_feature_flag,\
		     VAR_FLAGS_OPTIONAL | VAR_FLAGS_RANGE_CHECK_ASSUME_DEFAULT,\
		     CFG_ENABLE_EGAP_FLAGS_FEATURE_DEFAULT,\
		     CFG_ENABLE_EGAP_FLAGS_FEATURE_MIN,\
		     CFG_ENABLE_EGAP_FLAGS_FEATURE_MAX),

/* end Enhanced Green AP flags/params */

#define HDD_GREEN_AP_REG_VARIABLES \
	CFG_ENABLE_GREEN_AP_FEATURE_REG_VARIABLE \
	CFG_ENABLE_EGAP_ENABLE_FEATURE_REG_VARIABLE \
	CFG_ENABLE_EGAP_INACT_TIME_FEATURE_REG_VARIABLE \
	CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_REG_VARIABLE \
	CFG_ENABLE_EGAP_FLAGS_FEATURE_REG_VARIABLE

#define HDD_GREEN_AP_CFG_FIELDS \
	CFG_ENABLE_GREEN_AP_FEATURE_FIELD \
	CFG_ENABLE_EGAP_ENABLE_FEATURE_FIELD \
	CFG_ENABLE_EGAP_INACT_TIME_FEATURE_FIELD \
	CFG_ENABLE_EGAP_WAIT_TIME_FEATURE_FIELD \
	CFG_ENABLE_EGAP_FLAGS_FEATURE_FIELD

#else /* WLAN_SUPPORT_GREEN_AP */

#define HDD_GREEN_AP_REG_VARIABLES
#define HDD_GREEN_AP_CFG_FIELDS

#endif /* WLAN_SUPPORT_GREEN_AP */
