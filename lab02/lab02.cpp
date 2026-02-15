// // #define UNICODE
// // #define _UNICODE
// // #include <windows.h>
// // #include <stdio.h>
// #include <string>
// #include <fstream>
// #include <iostream>
// #include <chrono>
// #include <ctime>



// int main()
// {
    
//     std::cout<<"AAA"<<std::endl;
//     std::cout<<"AAA"<<std::endl;
//     std::ofstream local_file("log.txt");
//     local_file << std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()) << " " << "HALO" << std::endl;
//     local_file.close();
//     return 0;
// }

// // void my_write_log(std::string message, std::string file_name)
// // {
// //     std::cout<<"AAA";
// //     std::ofstream local_file(file_name);
// //     local_file << std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()) << " " << message << std::endl;
// //     local_file.close();
// // }


// // void do_with_create_process(std::wstring file_name, std::string log_file_name)
// // {
// //     STARTUPINFO si = {0};
// //     PROCESS_INFORMATION pi = {0};
// //     si.cb = sizeof(si);


// //     if (!CreateProcess(L"C:\\Windows\\System32\\notepad.exe",
// //                        NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
// //     {
// //         printf("CreateProcess failed (%d).\n", GetLastError());
// //         return ;
// //     }

// //     printf("Process created! PID: %lu\n", pi.dwProcessId);
// //     HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, true, pi.dwProcessId);
// //     if (h == NULL)
// //     {
// //         DWORD err = GetLastError();
// //         printf("OpenProcess failed. Error: %lu\n", err);

// //         if (err == ERROR_ACCESS_DENIED)
// //         {
// //             printf("Try running as Administrator!\n");
// //         }
// //         return;
// //     }

// //     printf("Success! Handle: 0x%p\n", h);

// //     CloseHandle(pi.hProcess);
// //     CloseHandle(pi.hThread);
// // }


#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <windows.h>
int main() {
        #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    try{

        std::cout<<"J"<<std::flush;;
        std::ofstream f("log.txt");
        f << "AA";
        f.close();
    }
    catch(std::exception &e){
        std::cerr<<e.what();
    }
    return 0;
}