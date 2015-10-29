/* Copyright (c) 2014, ENEA Software AB
 * Copyrighy (c) 2014, Nokia
 * All rights reserved.
 *
 * SPDX-License-Identifier:    BSD-3-Clause
 */
#include "ofp.h"

// Test for successful compile & link.
int main() {
	static ofp_init_global_t oig;

	if (odp_init_global(NULL, NULL)) {
		OFP_ERR("Error: ODP global init failed.\n");
		exit(EXIT_FAILURE);
	}
	if (odp_init_local(ODP_THREAD_CONTROL)) {
		OFP_ERR("Error: ODP local init failed.\n");
		exit(EXIT_FAILURE);
	}

	if (ofp_init_global(&oig)) {
		OFP_ERR("Error: OFP global init failed.\n");
		exit(EXIT_FAILURE);
	}

	OFP_INFO("Init successful.\n");
	return 0;
}
