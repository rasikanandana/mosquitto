#include <stdio.h>
  
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

int init_datatype_tests(void);

int main(int argc, char *argv[])
{

    if(CU_initialize_registry() != CUE_SUCCESS){
        printf("Error initializing CUnit registry.\n");
        return 1;
    }

    if(init_datatype_tests()){
        CU_cleanup_registry();
        return 1;
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}

