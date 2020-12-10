// Copyright (c) 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by the QUICHE Copybara export script.

QUIC_FLAG(FLAGS_quic_reloadable_flag_http2_use_fast_huffman_encoder, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_abort_qpack_on_stream_reset, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_ack_delay_alarm_granularity, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_stream_info_to_idle_close_detail, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allocate_stream_sequencer_buffer_blocks_on_demand, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allow_client_enabled_bbr_v2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_avoid_too_low_probe_bw_cwnd, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_disable_reno_coexistence, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_fewer_startup_round_trips, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_use_bytes_delivered, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_can_send_ack_frequency, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_close_connection_on_0rtt_packet_number_higher_than_1rtt, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_bursts, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_cwnd_and_pacing_gains, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_enable_5rto_blackhole_detection2, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_on_pto, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr_v2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_delay_initial_ack, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_deprecate_http2_priority_experiment, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_server_blackhole_detection, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_draft_29, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q043, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q046, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q050, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_t051, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_discard_initial_packet_with_key_dropped, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_do_not_clip_received_error_code, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_reset_ideal_next_packet_send_time, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_dont_defer_sending, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_mtu_discovery_at_server, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_server_on_wire_ping, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_token_based_address_validation, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_encrypted_control_frames, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_encrypted_goaway, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_extract_x509_subject_using_certificate_view, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_willing_and_able_to_write2, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_goaway_with_max_stream_id, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_granular_qpack_error_codes, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_new_priority_update_frame, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_pass_path_response_to_validator, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_require_handshake_confirmation, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_round_up_tiny_bandwidth, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_goaway_with_connection_close, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_path_response, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_timestamps, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_version_negotiation_for_short_connection_ids, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_single_ack_in_packet, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_split_up_send_rst_2, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_start_peer_migration_earlier, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_false, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_true, true)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_use_early_select_cert, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_unified_iw_options, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_circular_deque_for_unacked_packets_v2, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_encryption_level_context, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_use_write_or_buffer_data_at_level, false)
QUIC_FLAG(FLAGS_quic_reloadable_flag_send_quic_fallback_server_config_on_leto_error, false)
QUIC_FLAG(FLAGS_quic_restart_flag_dont_fetch_quic_private_keys_from_leto, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_enable_zero_rtt_for_tls_v2, true)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_offload_pacing_to_usps2, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_server_temporarily_retain_tls_zero_rtt_keys, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_session_tickets_always_enabled, true)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_startup_faster_interval_set, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_support_release_time_for_gso, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_false, false)
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_true, true)
