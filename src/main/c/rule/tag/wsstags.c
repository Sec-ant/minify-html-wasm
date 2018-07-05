#ifndef _HDR_HYPERBUILD_RULE_WSSTAGS
#define _HDR_HYPERBUILD_RULE_WSSTAGS

#include "../../ext/nicehash/set/str.h"
#include "../../util/hbchar.h"

static nh_set_str_t hb_r_wsstags_set;

void hb_r_wsstags_init(void) {
  hb_r_wsstags_set = nh_set_str_create();
  nh_set_str_add(hb_r_wsstags_set, "code");
  nh_set_str_add(hb_r_wsstags_set, "pre");
}

int hb_r_wsstags_check(hb_char_t *tag) {
  return nh_set_str_has(hb_r_wsstags_set, (char *) tag);
}

#endif // _HDR_HYPERBUILD_RULE_WSSTAGS