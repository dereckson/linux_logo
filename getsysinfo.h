struct os_info_type {
      char *os_name;
      char *os_version;
      char *os_revision;
      char *host_name;
      char *uptime;
      char *load_average;
};

struct hw_info_type {
      int num_cpus;
      char *bogo_total;
      char *megahertz;
      char *cpu_vendor;
      char *cpu_type;
      char *mem_size;
};



void get_os_info(struct os_info_type *os_info);
void get_hw_info(struct hw_info_type *hw_info,int skip_bogomips,
		       char *cpuinfo_file);
