#pragma once

/* ensure this header can be used in a C++ program */
#ifdef __cplusplus
extern "C"
{
#endif

    // For the details, please refer to

    //            https://learn.microsoft.com/en-gb/windows/win32/fileio/exfat-specification

    typedef struct
    {
        char JumpBoot[3];
        char FileSystemName[8];
        char MustBeZero[53];
        long int PartitionOffset;
        long int VolumeLength;
        int FatOffset;
        int FatLength;
        int ClusterHeapOffset;
        int ClusterCount;
        int FirstClusterOfRootDirectory;
        int VolumeSerialNumber;

    } Main_Boot;

#ifdef __cplusplus
    extern "C"
};
#endif
