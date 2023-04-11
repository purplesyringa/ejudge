// This is an auto-generated file, do not edit

#ifndef __SUPER_RUN_PACKET_META_H__
#define __SUPER_RUN_PACKET_META_H__

#include <stdlib.h>

enum
{
  META_SUPER_RUN_IN_GLOBAL_PACKET_contest_id = 1,
  META_SUPER_RUN_IN_GLOBAL_PACKET_judge_id,
  META_SUPER_RUN_IN_GLOBAL_PACKET_run_id,
  META_SUPER_RUN_IN_GLOBAL_PACKET_submit_id,
  META_SUPER_RUN_IN_GLOBAL_PACKET_reply_spool_dir,
  META_SUPER_RUN_IN_GLOBAL_PACKET_reply_report_dir,
  META_SUPER_RUN_IN_GLOBAL_PACKET_reply_full_archive_dir,
  META_SUPER_RUN_IN_GLOBAL_PACKET_reply_packet_name,
  META_SUPER_RUN_IN_GLOBAL_PACKET_priority,
  META_SUPER_RUN_IN_GLOBAL_PACKET_variant,
  META_SUPER_RUN_IN_GLOBAL_PACKET_lang_short_name,
  META_SUPER_RUN_IN_GLOBAL_PACKET_arch,
  META_SUPER_RUN_IN_GLOBAL_PACKET_lang_key,
  META_SUPER_RUN_IN_GLOBAL_PACKET_secure_run,
  META_SUPER_RUN_IN_GLOBAL_PACKET_detect_violations,
  META_SUPER_RUN_IN_GLOBAL_PACKET_enable_memory_limit_error,
  META_SUPER_RUN_IN_GLOBAL_PACKET_suid_run,
  META_SUPER_RUN_IN_GLOBAL_PACKET_enable_container,
  META_SUPER_RUN_IN_GLOBAL_PACKET_enable_max_stack_size,
  META_SUPER_RUN_IN_GLOBAL_PACKET_user_id,
  META_SUPER_RUN_IN_GLOBAL_PACKET_user_login,
  META_SUPER_RUN_IN_GLOBAL_PACKET_user_name,
  META_SUPER_RUN_IN_GLOBAL_PACKET_user_spelling,
  META_SUPER_RUN_IN_GLOBAL_PACKET_score_system,
  META_SUPER_RUN_IN_GLOBAL_PACKET_is_virtual,
  META_SUPER_RUN_IN_GLOBAL_PACKET_max_file_length,
  META_SUPER_RUN_IN_GLOBAL_PACKET_max_line_length,
  META_SUPER_RUN_IN_GLOBAL_PACKET_max_cmd_length,
  META_SUPER_RUN_IN_GLOBAL_PACKET_enable_full_archive,
  META_SUPER_RUN_IN_GLOBAL_PACKET_accepting_mode,
  META_SUPER_RUN_IN_GLOBAL_PACKET_separate_user_score,
  META_SUPER_RUN_IN_GLOBAL_PACKET_mime_type,
  META_SUPER_RUN_IN_GLOBAL_PACKET_notify_flag,
  META_SUPER_RUN_IN_GLOBAL_PACKET_advanced_layout,
  META_SUPER_RUN_IN_GLOBAL_PACKET_rejudge_flag,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts1,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts1_us,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts2,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts2_us,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts3,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts3_us,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts4,
  META_SUPER_RUN_IN_GLOBAL_PACKET_ts4_us,
  META_SUPER_RUN_IN_GLOBAL_PACKET_lang_time_limit_adj_ms,
  META_SUPER_RUN_IN_GLOBAL_PACKET_exe_sfx,
  META_SUPER_RUN_IN_GLOBAL_PACKET_restart,
  META_SUPER_RUN_IN_GLOBAL_PACKET_disable_sound,
  META_SUPER_RUN_IN_GLOBAL_PACKET_is_dos,
  META_SUPER_RUN_IN_GLOBAL_PACKET_time_limit_retry_count,
  META_SUPER_RUN_IN_GLOBAL_PACKET_checker_locale,
  META_SUPER_RUN_IN_GLOBAL_PACKET_run_uuid,
  META_SUPER_RUN_IN_GLOBAL_PACKET_judge_uuid,
  META_SUPER_RUN_IN_GLOBAL_PACKET_zip_mode,
  META_SUPER_RUN_IN_GLOBAL_PACKET_testlib_mode,
  META_SUPER_RUN_IN_GLOBAL_PACKET_contest_server_id,
  META_SUPER_RUN_IN_GLOBAL_PACKET_separate_run_spool_mode,
  META_SUPER_RUN_IN_GLOBAL_PACKET_bson_available,
  META_SUPER_RUN_IN_GLOBAL_PACKET_lang_container_options,
  META_SUPER_RUN_IN_GLOBAL_PACKET_not_ok_is_cf,

  META_SUPER_RUN_IN_GLOBAL_PACKET_LAST_FIELD,
};

struct super_run_in_global_packet;

int meta_super_run_in_global_packet_get_type(int tag);
size_t meta_super_run_in_global_packet_get_size(int tag);
const char *meta_super_run_in_global_packet_get_name(int tag);
const void *meta_super_run_in_global_packet_get_ptr(const struct super_run_in_global_packet *ptr, int tag);
void *meta_super_run_in_global_packet_get_ptr_nc(struct super_run_in_global_packet *ptr, int tag);
int meta_super_run_in_global_packet_lookup_field(const char *name);

struct meta_methods;
extern const struct meta_methods meta_super_run_in_global_packet_methods;


enum
{
  META_SUPER_RUN_IN_PROBLEM_PACKET_type = 1,
  META_SUPER_RUN_IN_PROBLEM_PACKET_id,
  META_SUPER_RUN_IN_PROBLEM_PACKET_check_presentation,
  META_SUPER_RUN_IN_PROBLEM_PACKET_scoring_checker,
  META_SUPER_RUN_IN_PROBLEM_PACKET_enable_checker_token,
  META_SUPER_RUN_IN_PROBLEM_PACKET_interactive_valuer,
  META_SUPER_RUN_IN_PROBLEM_PACKET_disable_pe,
  META_SUPER_RUN_IN_PROBLEM_PACKET_disable_wtl,
  META_SUPER_RUN_IN_PROBLEM_PACKET_wtl_is_cf,
  META_SUPER_RUN_IN_PROBLEM_PACKET_use_stdin,
  META_SUPER_RUN_IN_PROBLEM_PACKET_use_stdout,
  META_SUPER_RUN_IN_PROBLEM_PACKET_combined_stdin,
  META_SUPER_RUN_IN_PROBLEM_PACKET_combined_stdout,
  META_SUPER_RUN_IN_PROBLEM_PACKET_ignore_exit_code,
  META_SUPER_RUN_IN_PROBLEM_PACKET_binary_input,
  META_SUPER_RUN_IN_PROBLEM_PACKET_binary_output,
  META_SUPER_RUN_IN_PROBLEM_PACKET_real_time_limit_ms,
  META_SUPER_RUN_IN_PROBLEM_PACKET_time_limit_ms,
  META_SUPER_RUN_IN_PROBLEM_PACKET_use_ac_not_ok,
  META_SUPER_RUN_IN_PROBLEM_PACKET_full_score,
  META_SUPER_RUN_IN_PROBLEM_PACKET_full_user_score,
  META_SUPER_RUN_IN_PROBLEM_PACKET_variable_full_score,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_score,
  META_SUPER_RUN_IN_PROBLEM_PACKET_use_corr,
  META_SUPER_RUN_IN_PROBLEM_PACKET_use_info,
  META_SUPER_RUN_IN_PROBLEM_PACKET_use_tgz,
  META_SUPER_RUN_IN_PROBLEM_PACKET_tests_to_accept,
  META_SUPER_RUN_IN_PROBLEM_PACKET_accept_partial,
  META_SUPER_RUN_IN_PROBLEM_PACKET_min_tests_to_accept,
  META_SUPER_RUN_IN_PROBLEM_PACKET_checker_real_time_limit_ms,
  META_SUPER_RUN_IN_PROBLEM_PACKET_checker_time_limit_ms,
  META_SUPER_RUN_IN_PROBLEM_PACKET_checker_max_vm_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_checker_max_stack_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_checker_max_rss_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_short_name,
  META_SUPER_RUN_IN_PROBLEM_PACKET_long_name,
  META_SUPER_RUN_IN_PROBLEM_PACKET_internal_name,
  META_SUPER_RUN_IN_PROBLEM_PACKET_problem_dir,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_dir,
  META_SUPER_RUN_IN_PROBLEM_PACKET_corr_dir,
  META_SUPER_RUN_IN_PROBLEM_PACKET_info_dir,
  META_SUPER_RUN_IN_PROBLEM_PACKET_tgz_dir,
  META_SUPER_RUN_IN_PROBLEM_PACKET_input_file,
  META_SUPER_RUN_IN_PROBLEM_PACKET_output_file,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_score_list,
  META_SUPER_RUN_IN_PROBLEM_PACKET_score_tests,
  META_SUPER_RUN_IN_PROBLEM_PACKET_standard_checker,
  META_SUPER_RUN_IN_PROBLEM_PACKET_valuer_sets_marked,
  META_SUPER_RUN_IN_PROBLEM_PACKET_interactor_time_limit_ms,
  META_SUPER_RUN_IN_PROBLEM_PACKET_interactor_real_time_limit_ms,
  META_SUPER_RUN_IN_PROBLEM_PACKET_disable_stderr,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_pat,
  META_SUPER_RUN_IN_PROBLEM_PACKET_corr_pat,
  META_SUPER_RUN_IN_PROBLEM_PACKET_info_pat,
  META_SUPER_RUN_IN_PROBLEM_PACKET_tgz_pat,
  META_SUPER_RUN_IN_PROBLEM_PACKET_tgzdir_pat,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_sets,
  META_SUPER_RUN_IN_PROBLEM_PACKET_checker_env,
  META_SUPER_RUN_IN_PROBLEM_PACKET_valuer_env,
  META_SUPER_RUN_IN_PROBLEM_PACKET_interactor_env,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_checker_env,
  META_SUPER_RUN_IN_PROBLEM_PACKET_init_env,
  META_SUPER_RUN_IN_PROBLEM_PACKET_start_env,
  META_SUPER_RUN_IN_PROBLEM_PACKET_check_cmd,
  META_SUPER_RUN_IN_PROBLEM_PACKET_valuer_cmd,
  META_SUPER_RUN_IN_PROBLEM_PACKET_interactor_cmd,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_checker_cmd,
  META_SUPER_RUN_IN_PROBLEM_PACKET_init_cmd,
  META_SUPER_RUN_IN_PROBLEM_PACKET_start_cmd,
  META_SUPER_RUN_IN_PROBLEM_PACKET_solution_cmd,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_vm_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_data_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_stack_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_rss_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_core_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_file_size,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_open_file_count,
  META_SUPER_RUN_IN_PROBLEM_PACKET_max_process_count,
  META_SUPER_RUN_IN_PROBLEM_PACKET_spelling,
  META_SUPER_RUN_IN_PROBLEM_PACKET_open_tests,
  META_SUPER_RUN_IN_PROBLEM_PACKET_enable_process_group,
  META_SUPER_RUN_IN_PROBLEM_PACKET_umask,
  META_SUPER_RUN_IN_PROBLEM_PACKET_enable_kill_all,
  META_SUPER_RUN_IN_PROBLEM_PACKET_uuid,
  META_SUPER_RUN_IN_PROBLEM_PACKET_enable_extended_info,
  META_SUPER_RUN_IN_PROBLEM_PACKET_stop_on_first_fail,
  META_SUPER_RUN_IN_PROBLEM_PACKET_enable_control_socket,
  META_SUPER_RUN_IN_PROBLEM_PACKET_container_options,
  META_SUPER_RUN_IN_PROBLEM_PACKET_enable_user_input,
  META_SUPER_RUN_IN_PROBLEM_PACKET_user_input_file,
  META_SUPER_RUN_IN_PROBLEM_PACKET_test_count,
  META_SUPER_RUN_IN_PROBLEM_PACKET_copy_exe_to_tgzdir,

  META_SUPER_RUN_IN_PROBLEM_PACKET_LAST_FIELD,
};

struct super_run_in_problem_packet;

int meta_super_run_in_problem_packet_get_type(int tag);
size_t meta_super_run_in_problem_packet_get_size(int tag);
const char *meta_super_run_in_problem_packet_get_name(int tag);
const void *meta_super_run_in_problem_packet_get_ptr(const struct super_run_in_problem_packet *ptr, int tag);
void *meta_super_run_in_problem_packet_get_ptr_nc(struct super_run_in_problem_packet *ptr, int tag);
int meta_super_run_in_problem_packet_lookup_field(const char *name);

struct meta_methods;
extern const struct meta_methods meta_super_run_in_problem_packet_methods;


enum
{
  META_SUPER_RUN_IN_TESTER_PACKET_name = 1,
  META_SUPER_RUN_IN_TESTER_PACKET_is_dos,
  META_SUPER_RUN_IN_TESTER_PACKET_no_redirect,
  META_SUPER_RUN_IN_TESTER_PACKET_priority_adjustment,
  META_SUPER_RUN_IN_TESTER_PACKET_ignore_stderr,
  META_SUPER_RUN_IN_TESTER_PACKET_arch,
  META_SUPER_RUN_IN_TESTER_PACKET_key,
  META_SUPER_RUN_IN_TESTER_PACKET_memory_limit_type,
  META_SUPER_RUN_IN_TESTER_PACKET_secure_exec_type,
  META_SUPER_RUN_IN_TESTER_PACKET_no_core_dump,
  META_SUPER_RUN_IN_TESTER_PACKET_enable_memory_limit_error,
  META_SUPER_RUN_IN_TESTER_PACKET_kill_signal,
  META_SUPER_RUN_IN_TESTER_PACKET_clear_env,
  META_SUPER_RUN_IN_TESTER_PACKET_time_limit_adjustment_ms,
  META_SUPER_RUN_IN_TESTER_PACKET_errorcode_file,
  META_SUPER_RUN_IN_TESTER_PACKET_error_file,
  META_SUPER_RUN_IN_TESTER_PACKET_prepare_cmd,
  META_SUPER_RUN_IN_TESTER_PACKET_start_cmd,
  META_SUPER_RUN_IN_TESTER_PACKET_start_env,

  META_SUPER_RUN_IN_TESTER_PACKET_LAST_FIELD,
};

struct super_run_in_tester_packet;

int meta_super_run_in_tester_packet_get_type(int tag);
size_t meta_super_run_in_tester_packet_get_size(int tag);
const char *meta_super_run_in_tester_packet_get_name(int tag);
const void *meta_super_run_in_tester_packet_get_ptr(const struct super_run_in_tester_packet *ptr, int tag);
void *meta_super_run_in_tester_packet_get_ptr_nc(struct super_run_in_tester_packet *ptr, int tag);
int meta_super_run_in_tester_packet_lookup_field(const char *name);

struct meta_methods;
extern const struct meta_methods meta_super_run_in_tester_packet_methods;

#endif
