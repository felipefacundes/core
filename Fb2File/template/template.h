#ifndef _FB2FILE_TEMPLATE_H
#define _FB2FILE_TEMPLATE_H

#include <string>
#include "../../DesktopEditor/common/File.h"
#include "../../OfficeUtils/src/OfficeUtils.h"

static bool ExtractTemplate(const std::wstring& sDirectory)
{
    // [START]
    int template_binary_len = 6423;
    BYTE template_binary[6423] = {80,75,3,4,20,0,0,0,0,0,82,137,238,80,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,119,111,114,100,47,80,75,3,4,20,0,0,0,8,0,45,109,238,80,250,111,5,35,60,1,0,0,241,2,0,0,18,0,0,0,119,111,114,100,47,102,111,110,116,84,97,98,108,101,46,120,109,108,149,208,205,110,194,48,12,0,224,87,137,114,31,13,165,160,169,162,160,253,8,105,151,29,38,246,0,33,164,16,45,177,171,56,208,241,246,243,186,194,14,140,141,41,138,226,40,241,39,219,211,249,123,240,98,111,35,57,132,74,14,7,74,10,11,6,215,14,54,149,124,93,46,110,110,165,160,164,97,173,61,130,173,228,193,146,156,207,166,109,89,35,36,18,156,13,84,6,83,201,109,74,77,153,101,100,182,54,104,26,96,99,129,31,107,140,65,39,190,198,77,22,116,124,219,53,55,6,67,163,147,91,57,239,210,33,203,149,154,200,158,137,215,40,88,215,206,216,71,52,187,96,33,117,249,89,180,158,69,4,218,186,134,142,90,123,141,214,98,92,55,17,141,37,226,142,131,239,60,174,212,193,137,25,22,103,80,112,38,34,97,157,6,220,76,95,81,71,113,250,80,117,81,240,223,192,248,127,64,126,2,130,41,159,54,128,81,175,60,143,158,43,17,140,201,227,244,69,91,130,14,252,176,116,193,146,120,182,173,120,193,160,161,251,208,104,64,178,67,254,179,215,190,146,42,231,53,81,35,53,86,5,239,156,163,66,102,179,105,246,69,157,145,119,209,105,127,1,186,103,168,224,179,95,191,67,15,218,187,85,116,23,168,133,26,31,17,53,250,155,10,44,233,159,169,207,182,250,246,38,103,212,41,160,217,7,80,75,3,4,20,0,0,0,8,0,50,109,238,80,40,106,10,222,151,2,0,0,107,6,0,0,17,0,0,0,119,111,114,100,47,115,101,116,116,105,110,103,115,46,120,109,108,181,85,97,79,219,48,16,253,43,149,63,175,164,116,208,161,142,128,24,168,218,166,193,16,129,31,224,198,215,198,194,246,69,246,165,165,252,250,157,155,184,41,171,132,38,161,125,106,239,221,187,187,103,251,94,123,126,249,98,205,96,5,62,104,116,185,56,62,26,137,1,184,18,149,118,203,92,60,61,206,134,103,98,16,72,58,37,13,58,200,197,6,130,184,188,56,95,79,3,16,49,41,12,184,129,11,211,117,46,42,162,122,154,101,161,172,192,202,112,132,53,56,206,45,208,91,73,28,250,101,182,70,175,106,143,37,132,192,165,214,100,227,209,104,146,89,169,157,232,218,216,127,105,131,139,133,46,225,6,203,198,130,163,212,132,170,212,4,115,209,120,55,237,58,12,173,46,61,6,92,208,176,68,59,109,139,187,143,84,177,122,175,98,101,141,136,39,46,141,47,34,1,110,101,93,179,254,193,122,42,203,146,21,28,231,162,251,34,118,216,56,97,227,30,251,156,176,207,61,118,146,176,147,30,59,77,216,105,143,77,18,54,137,216,124,201,51,141,94,86,60,114,27,142,219,176,157,182,64,99,112,13,234,251,166,6,111,180,123,206,197,1,20,121,85,159,175,246,241,120,32,37,253,243,241,54,24,183,193,88,100,241,18,20,44,100,99,232,81,206,11,194,154,243,43,105,114,241,101,116,22,211,118,26,159,225,222,111,153,228,101,249,252,0,43,29,87,43,36,230,66,154,0,145,27,101,34,57,36,184,247,251,17,19,181,202,197,240,152,73,135,240,168,69,93,99,103,150,82,79,5,165,182,210,236,82,15,192,27,235,119,233,18,29,111,106,131,77,216,49,138,253,124,55,169,198,157,200,90,46,225,27,18,161,141,169,236,111,169,221,188,98,99,231,104,82,205,167,182,139,209,129,10,168,165,151,132,62,229,190,182,57,94,166,90,82,255,173,104,45,196,44,39,45,123,171,69,245,92,27,77,155,91,84,16,239,191,241,250,192,19,187,253,60,226,146,206,14,91,115,137,221,153,78,250,145,135,131,144,13,239,181,2,126,69,3,5,109,12,204,248,142,10,253,10,87,78,253,108,2,105,238,200,74,208,125,64,193,123,2,192,197,201,191,217,218,143,188,120,51,144,212,120,8,255,105,152,194,59,164,153,209,245,173,246,30,253,15,167,216,70,31,29,150,237,63,231,43,162,229,44,91,40,58,148,25,163,81,39,168,146,236,2,2,95,212,178,100,77,215,124,205,62,237,76,167,236,154,219,240,225,187,229,36,86,177,125,141,95,210,45,19,15,220,240,169,136,243,65,6,186,10,90,230,226,181,26,94,223,181,37,161,146,53,220,180,190,12,23,231,216,2,170,3,6,171,41,188,16,247,80,154,248,167,188,214,202,202,151,40,113,60,225,242,196,54,114,131,13,189,225,198,92,36,215,111,59,40,73,50,221,193,155,98,142,15,180,100,253,255,196,197,31,80,75,3,4,20,0,0,0,8,0,123,84,244,80,232,143,159,96,147,7,0,0,117,53,0,0,15,0,0,0,119,111,114,100,47,115,116,121,108,101,115,46,120,109,108,205,154,73,143,211,48,20,199,191,74,148,123,105,210,164,27,98,64,236,32,177,175,71,148,38,110,107,200,70,226,176,221,224,192,133,3,18,23,142,72,124,2,196,34,16,8,62,67,231,27,241,236,44,110,179,52,113,82,58,204,168,51,141,99,63,251,253,254,207,142,95,146,19,167,158,57,182,244,4,5,33,246,220,3,89,61,166,200,18,114,77,207,194,238,226,64,190,123,231,66,111,34,75,33,49,92,203,176,61,23,29,200,207,81,40,159,58,121,226,233,241,144,60,183,81,40,65,115,55,60,238,152,7,242,146,16,255,120,191,31,154,75,228,24,225,49,207,71,46,156,156,123,129,99,16,56,12,22,125,199,8,30,69,126,207,244,28,223,32,120,134,109,76,158,247,7,138,50,146,19,51,65,19,43,222,124,142,77,116,206,51,35,7,185,132,181,239,7,200,6,139,158,27,46,177,31,166,214,158,54,177,246,212,11,44,63,240,76,20,134,224,178,99,51,123,48,82,236,102,102,84,189,96,200,193,102,224,133,222,156,28,3,103,146,17,49,83,208,92,85,216,55,199,230,6,134,98,6,6,153,1,199,60,126,121,225,122,129,49,179,129,61,140,68,2,99,50,197,111,121,230,57,52,55,34,155,132,244,48,184,17,36,135,201,17,251,119,193,115,73,40,61,61,110,132,38,198,7,242,233,0,27,182,12,199,203,211,110,184,126,108,134,107,7,200,8,201,233,16,27,235,245,177,75,14,100,43,238,64,238,51,249,95,64,249,19,195,62,144,7,131,180,228,108,152,47,179,13,119,145,150,5,81,239,214,93,106,109,134,45,232,220,8,122,183,79,111,246,135,220,222,221,219,180,97,63,113,161,159,119,204,207,31,177,142,125,195,196,172,31,27,187,232,86,68,81,25,17,241,228,164,4,134,51,30,209,3,99,78,16,132,24,40,156,116,226,179,78,54,205,246,55,216,102,145,14,205,201,115,31,108,249,70,96,44,2,195,95,130,197,248,212,101,235,64,158,25,33,162,5,9,35,152,73,76,37,215,112,80,234,255,53,26,117,118,204,229,241,5,22,130,116,20,137,145,166,29,17,76,108,84,52,126,9,25,22,101,160,198,246,233,112,172,235,110,122,150,30,210,19,140,199,163,184,52,53,213,51,115,67,226,241,51,139,109,157,13,217,127,211,179,189,32,109,171,176,31,153,14,22,2,26,157,165,231,192,34,122,70,212,124,124,232,19,30,31,188,140,203,188,166,228,35,132,252,43,160,24,116,152,28,93,3,139,253,53,145,185,138,172,243,25,130,185,140,168,61,37,238,196,139,8,149,252,202,19,59,237,106,77,235,150,180,7,149,180,7,162,180,7,101,180,35,119,137,45,116,127,137,220,187,96,231,31,8,160,236,22,246,64,169,132,173,118,134,173,85,194,214,68,97,107,93,96,227,248,111,71,244,218,136,199,62,47,219,155,28,131,206,114,232,149,114,232,162,114,232,98,114,108,32,31,104,244,183,64,119,237,202,195,203,246,70,87,235,76,119,88,73,119,40,74,119,40,70,119,203,202,162,179,159,194,85,126,82,114,149,223,241,42,190,133,181,222,153,245,168,146,245,72,148,245,72,140,53,95,74,26,198,245,17,179,30,118,102,61,174,100,61,22,101,61,22,99,189,37,174,71,10,253,45,176,214,75,88,235,123,99,61,234,204,122,82,201,122,34,202,122,34,198,186,201,170,113,180,116,199,157,233,78,43,233,78,69,233,78,197,232,38,171,134,192,10,173,149,176,214,246,198,122,210,140,181,185,4,216,38,88,46,164,79,61,191,38,129,74,114,50,233,70,42,151,68,243,219,120,60,17,190,17,96,47,128,27,10,105,237,116,47,134,28,124,9,91,22,114,203,120,139,143,52,77,154,88,218,28,133,196,115,110,211,83,101,227,93,189,95,125,90,125,89,253,89,253,130,207,103,248,252,148,84,9,10,127,67,241,207,170,116,172,202,29,8,183,157,103,246,133,60,129,7,80,49,119,104,35,107,156,243,180,133,53,168,131,53,56,66,88,154,222,25,140,214,22,140,86,7,70,59,74,48,37,81,164,117,143,34,189,45,44,189,14,150,190,119,88,217,38,37,191,130,175,101,139,188,172,51,186,97,91,116,195,58,116,195,255,7,93,237,70,163,21,186,81,91,116,163,58,116,163,255,7,93,233,253,219,206,232,198,109,209,141,235,208,141,143,24,29,142,255,238,11,228,164,45,200,73,29,200,201,222,65,238,25,221,180,45,186,105,29,186,233,255,131,78,45,65,167,118,70,215,150,92,13,183,202,221,186,146,113,19,125,122,32,234,94,136,76,250,168,176,23,70,51,1,79,63,128,119,95,87,223,5,252,93,235,103,187,235,106,230,250,191,190,166,153,152,64,154,213,204,225,119,135,111,192,225,111,171,95,240,249,77,125,60,124,43,29,190,94,253,56,124,5,95,225,83,233,121,218,77,149,191,218,166,212,184,145,63,89,138,190,85,202,130,23,183,147,19,2,185,122,222,102,46,107,239,148,162,15,75,150,185,97,249,13,107,55,114,146,78,236,252,227,21,118,178,241,163,79,253,223,60,25,139,53,46,0,191,236,18,228,134,72,186,25,121,68,132,122,108,46,199,186,89,0,53,126,110,163,143,232,111,94,19,117,202,53,225,101,165,154,96,215,162,92,209,156,128,108,163,49,229,17,224,197,50,62,138,173,60,52,51,63,61,178,76,44,47,173,204,77,27,25,48,37,147,129,113,173,230,216,134,179,231,217,79,220,200,63,99,65,159,113,111,89,104,130,212,54,90,107,62,81,232,47,211,229,5,248,7,95,88,68,128,104,73,232,17,207,111,209,152,133,89,236,91,135,190,1,0,44,48,45,218,199,81,30,35,104,31,160,229,11,194,29,193,213,128,89,249,231,143,200,199,37,235,194,184,184,46,196,93,184,212,68,100,216,183,227,185,159,141,52,136,96,252,205,23,5,126,135,111,178,113,139,79,83,20,30,129,13,116,100,94,102,58,14,214,133,172,112,158,171,219,105,93,218,122,117,111,120,149,203,106,63,200,172,85,95,17,124,185,197,251,26,89,99,145,209,8,4,104,214,38,31,164,133,117,107,142,131,144,92,97,250,143,149,105,217,114,213,133,187,225,186,30,97,239,96,53,2,207,171,111,35,207,107,237,108,203,192,77,10,141,82,64,17,222,104,219,214,161,238,250,162,164,87,23,246,125,83,62,125,48,220,181,124,79,122,244,37,191,23,70,35,241,210,202,213,210,241,58,59,19,46,53,40,48,62,1,209,210,38,255,74,50,152,113,34,139,115,7,37,145,143,25,188,134,43,32,175,190,77,77,94,107,103,122,166,38,27,173,140,105,101,161,165,145,55,234,162,170,54,29,77,183,8,171,228,103,34,171,183,39,173,231,158,71,96,177,201,111,115,248,9,41,64,115,20,192,11,189,149,217,231,116,42,215,60,136,132,151,131,201,105,27,47,50,218,97,228,195,251,194,102,128,125,210,44,25,205,2,160,116,240,61,191,122,248,116,195,80,165,56,52,44,104,206,141,154,213,14,55,123,48,88,146,144,171,107,247,29,196,222,63,221,216,111,237,70,243,70,179,123,245,17,178,247,159,135,47,15,95,73,135,47,33,93,255,3,127,127,174,126,108,201,221,185,42,91,0,54,193,83,237,23,161,111,51,231,158,245,114,15,147,243,61,38,120,197,75,180,210,29,168,82,27,210,245,10,147,153,125,35,72,190,92,102,115,254,41,157,209,217,72,173,103,134,156,86,60,139,108,251,170,17,36,89,85,85,213,120,213,136,207,170,202,164,112,158,111,167,139,237,121,214,181,197,64,127,125,48,233,97,67,222,155,132,139,185,17,45,149,46,6,216,42,153,114,27,178,84,145,31,82,242,124,98,20,223,37,216,156,18,133,25,195,231,69,94,157,51,240,66,60,44,58,21,57,109,49,135,84,10,25,10,87,167,125,235,88,187,246,237,169,182,29,186,199,110,8,17,124,169,171,129,123,109,13,244,215,165,104,22,123,229,75,63,75,98,225,198,120,33,4,137,103,214,190,194,94,114,67,168,244,26,182,53,18,135,13,95,13,202,214,224,210,241,151,92,186,46,65,179,128,46,168,114,235,11,238,230,93,132,225,72,59,171,230,19,233,101,174,151,77,69,155,45,195,229,174,97,199,88,52,187,182,176,154,21,155,70,94,161,77,206,204,26,54,29,129,192,134,144,213,175,205,147,227,109,95,79,29,43,234,218,190,175,55,25,110,110,253,164,146,189,159,137,92,198,179,36,180,248,183,240,228,95,80,75,3,4,20,0,0,0,0,0,24,104,236,80,0,0,0,0,0,0,0,0,0,0,0,0,11,0,0,0,119,111,114,100,47,116,104,101,109,101,47,80,75,3,4,20,0,0,0,8,0,38,109,238,80,107,155,19,119,133,3,0,0,167,17,0,0,21,0,0,0,119,111,114,100,47,116,104,101,109,101,47,116,104,101,109,101,49,46,120,109,108,237,88,93,111,218,48,20,253,43,145,223,87,231,19,74,85,90,181,80,180,135,77,147,214,78,123,118,19,135,164,117,156,200,54,165,252,251,93,39,1,135,4,74,216,162,105,15,3,137,216,215,62,247,28,95,219,215,14,215,183,239,25,179,222,168,144,105,206,167,200,185,176,145,69,121,152,71,41,95,78,209,143,167,197,167,75,100,73,69,120,68,88,206,233,20,109,168,68,183,55,215,228,74,37,52,163,22,160,185,188,34,83,148,40,85,92,97,44,67,48,19,121,145,23,148,67,91,156,139,140,40,168,138,37,142,4,89,131,215,140,97,215,182,71,56,35,41,71,53,94,244,193,231,113,156,134,116,158,135,171,140,114,85,57,17,148,17,5,202,101,146,22,114,235,173,232,227,173,16,84,130,155,18,189,47,137,147,12,198,249,173,100,179,158,244,40,209,110,188,15,140,106,114,169,13,33,19,143,161,54,54,17,85,223,232,213,209,15,185,145,51,38,172,55,194,166,8,134,30,229,235,39,250,174,144,197,136,84,208,48,69,118,249,1,8,222,118,134,226,14,206,212,17,47,13,15,139,242,211,242,80,67,181,35,183,244,32,150,207,59,23,190,31,248,163,59,141,168,26,12,169,91,145,118,33,15,227,135,209,195,168,13,217,245,37,97,8,49,113,58,176,224,126,114,63,15,58,48,211,191,46,30,98,156,143,231,158,115,4,218,100,245,58,208,187,64,127,143,65,61,3,245,59,208,197,98,182,155,142,46,212,55,208,224,64,84,199,238,204,63,6,13,12,116,212,129,142,237,187,185,63,110,67,247,250,39,44,229,175,29,160,29,140,188,89,55,72,166,119,156,179,207,7,145,147,192,95,140,221,46,210,0,112,99,125,87,174,184,58,176,218,173,25,172,68,153,134,150,91,174,251,140,188,228,98,1,93,117,69,239,76,110,169,77,65,99,18,2,226,78,164,132,105,206,186,73,247,161,228,80,7,109,47,119,152,60,212,170,237,240,104,177,101,41,255,155,212,134,13,215,193,49,161,202,212,177,188,16,167,140,61,170,13,163,95,100,169,83,230,44,141,22,96,44,43,37,104,55,71,69,2,197,146,212,180,64,173,5,90,10,98,202,18,220,86,5,171,200,37,44,16,116,204,111,217,0,129,80,245,78,221,166,161,202,88,162,136,250,154,71,85,179,183,75,83,91,123,71,150,38,109,82,123,224,178,55,189,55,30,154,222,177,237,51,248,157,224,99,254,160,39,63,110,204,1,131,5,72,244,25,234,140,220,74,140,37,67,194,104,4,22,237,170,236,1,207,114,10,7,153,78,153,144,136,214,243,233,212,130,107,107,123,68,142,215,115,68,134,252,242,116,64,27,2,38,222,224,2,250,76,105,83,129,127,74,65,208,79,65,207,73,181,143,77,42,238,110,123,198,247,107,214,122,138,70,94,0,222,66,2,151,151,24,114,20,20,179,2,220,74,190,68,22,97,75,184,155,133,74,160,190,73,99,63,20,193,137,80,216,61,66,177,99,173,134,201,141,114,199,29,219,3,74,63,135,121,98,15,25,180,30,204,184,61,121,52,142,105,168,142,88,76,181,110,203,87,138,138,199,36,90,91,207,108,37,190,19,208,234,87,203,40,74,165,154,34,119,91,17,176,135,161,165,172,137,92,253,76,85,242,152,144,130,234,117,214,189,7,152,157,65,88,145,144,58,107,93,106,35,110,159,241,70,3,212,246,228,225,61,237,127,60,20,111,192,161,4,255,135,178,213,142,15,173,185,231,229,226,31,189,89,248,246,48,71,171,161,246,79,31,3,13,250,253,147,189,157,24,39,251,137,113,0,117,103,158,82,174,253,177,2,55,232,145,154,219,167,84,65,84,98,233,31,72,127,169,8,25,213,248,202,60,232,133,195,132,249,114,240,251,227,153,113,244,78,197,177,175,130,223,139,35,238,110,65,220,120,17,208,181,238,255,7,249,243,11,108,227,57,188,99,172,152,182,224,182,201,192,110,126,1,80,75,3,4,20,0,0,0,8,0,61,109,238,80,122,219,27,192,146,0,0,0,183,0,0,0,20,0,0,0,119,111,114,100,47,119,101,98,83,101,116,116,105,110,103,115,46,120,109,108,85,141,73,14,194,48,12,69,175,18,121,79,83,88,32,84,117,144,88,244,2,192,1,66,107,218,72,141,29,217,17,1,78,79,196,142,229,159,222,111,135,87,216,204,19,69,61,83,7,251,170,6,131,52,241,236,105,233,224,118,29,119,39,48,154,28,205,110,99,194,14,222,168,48,244,166,205,77,198,251,5,83,42,69,53,5,66,218,228,14,214,148,98,99,173,78,43,6,167,21,71,164,146,61,88,130,75,69,202,98,51,203,28,133,39,84,45,211,176,217,67,93,31,109,112,158,224,135,229,152,124,240,31,28,89,206,194,89,81,108,241,237,223,95,255,5,80,75,3,4,20,0,0,0,0,0,24,104,236,80,0,0,0,0,0,0,0,0,0,0,0,0,11,0,0,0,119,111,114,100,47,95,114,101,108,115,47,80,75,3,4,20,0,0,0,8,0,32,109,238,80,233,249,193,147,123,0,0,0,155,0,0,0,29,0,0,0,119,111,114,100,47,95,114,101,108,115,47,102,111,111,116,110,111,116,101,115,46,120,109,108,46,114,101,108,115,85,204,49,14,2,33,16,133,225,171,144,233,93,86,11,99,204,194,118,30,192,232,1,38,236,8,68,24,8,67,140,222,94,74,45,95,94,254,111,89,223,57,169,23,53,137,133,13,236,167,25,20,177,43,91,100,111,224,126,187,236,78,160,164,35,111,152,10,147,129,15,9,172,118,185,82,194,62,18,9,177,138,26,6,139,129,208,123,61,107,45,46,80,70,153,74,37,30,207,163,180,140,125,204,230,117,69,247,68,79,250,48,207,71,221,126,13,176,139,254,67,237,23,80,75,3,4,20,0,0,0,8,0,14,109,238,80,32,16,105,98,121,1,0,0,100,6,0,0,19,0,0,0,91,67,111,110,116,101,110,116,95,84,121,112,101,115,93,46,120,109,108,181,149,203,110,194,48,16,69,127,37,242,182,74,76,187,168,170,138,192,162,143,101,65,42,253,0,199,153,4,83,191,100,15,175,191,239,36,144,86,66,32,160,192,38,82,236,185,231,222,241,56,74,127,184,50,58,89,64,136,202,217,156,221,103,61,150,128,149,174,84,182,206,217,215,228,61,125,98,73,68,97,75,161,157,133,156,173,33,178,225,160,63,89,123,136,9,105,109,204,217,20,209,63,115,30,229,20,140,136,153,243,96,105,167,114,193,8,164,215,80,115,47,228,183,168,129,63,244,122,143,92,58,139,96,49,197,134,193,6,253,87,168,196,92,99,242,182,162,229,77,142,153,175,89,242,178,169,35,43,242,85,166,209,207,60,212,140,239,149,120,187,95,66,235,7,20,4,59,219,37,128,142,59,26,225,189,86,82,32,237,243,133,45,119,218,79,183,173,103,164,108,107,226,84,249,120,71,5,7,28,10,101,207,51,112,85,165,36,148,78,206,13,73,50,167,97,84,204,64,98,195,31,209,100,131,42,33,25,139,128,31,194,16,141,83,229,56,56,31,57,113,51,226,92,228,6,77,240,18,202,212,7,42,12,168,160,237,237,144,247,210,133,146,35,93,19,216,60,239,47,14,208,98,142,90,86,142,232,162,208,112,177,95,131,163,94,37,196,72,159,136,209,89,135,62,30,98,9,197,39,32,146,44,94,63,198,31,188,29,192,209,225,75,23,254,113,24,221,101,110,212,231,140,60,222,172,239,120,66,211,219,43,224,208,58,132,27,100,216,162,79,57,7,92,235,91,36,104,184,39,216,119,128,235,7,248,221,49,66,217,46,7,111,255,18,131,31,80,75,3,4,20,0,0,0,0,0,24,104,236,80,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,95,114,101,108,115,47,80,75,3,4,20,0,0,0,8,0,23,109,238,80,42,73,130,205,226,0,0,0,76,2,0,0,11,0,0,0,95,114,101,108,115,47,46,114,101,108,115,141,146,219,74,3,65,12,64,127,101,200,123,119,182,21,68,164,211,190,136,208,55,145,250,1,97,38,123,193,157,11,73,212,246,239,29,68,209,74,173,251,56,153,228,228,36,100,189,61,196,201,188,18,203,152,147,131,101,211,130,161,228,115,24,83,239,224,105,127,191,184,1,35,138,41,224,148,19,57,56,146,192,118,179,126,164,9,181,150,200,48,22,49,149,145,196,193,160,90,110,173,21,63,80,68,105,114,161,84,127,186,204,17,181,62,185,183,5,253,51,246,100,87,109,123,109,249,39,3,78,153,102,23,28,240,46,44,193,236,143,133,230,176,115,215,141,158,238,178,127,137,148,244,76,139,95,25,149,140,220,147,58,120,203,28,108,248,12,55,21,11,246,188,205,106,190,205,223,147,218,72,138,1,21,173,207,76,139,194,181,154,117,36,249,22,170,46,15,53,44,31,25,151,132,174,230,11,253,191,30,58,40,165,64,225,178,18,150,242,101,100,79,174,96,243,14,80,75,1,2,63,0,20,0,0,0,0,0,82,137,238,80,0,0,0,0,0,0,0,0,0,0,0,0,5,0,36,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,119,111,114,100,47,10,0,32,0,0,0,0,0,1,0,24,0,223,76,86,139,232,89,214,1,108,44,172,247,103,94,214,1,224,14,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,45,109,238,80,250,111,5,35,60,1,0,0,241,2,0,0,18,0,36,0,0,0,0,0,0,0,32,0,0,0,35,0,0,0,119,111,114,100,47,102,111,110,116,84,97,98,108,101,46,120,109,108,10,0,32,0,0,0,0,0,1,0,24,0,202,119,23,82,203,89,214,1,194,52,21,251,103,94,214,1,241,53,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,50,109,238,80,40,106,10,222,151,2,0,0,107,6,0,0,17,0,36,0,0,0,0,0,0,0,32,0,0,0,143,1,0,0,119,111,114,100,47,115,101,116,116,105,110,103,115,46,120,109,108,10,0,32,0,0,0,0,0,1,0,24,0,237,210,167,88,203,89,214,1,208,91,21,251,103,94,214,1,241,53,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,123,84,244,80,232,143,159,96,147,7,0,0,117,53,0,0,15,0,36,0,0,0,0,0,0,0,32,0,0,0,85,4,0,0,119,111,114,100,47,115,116,121,108,101,115,46,120,109,108,10,0,32,0,0,0,0,0,1,0,24,0,202,202,50,102,104,94,214,1,82,202,214,102,104,94,214,1,20,171,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,0,0,24,104,236,80,0,0,0,0,0,0,0,0,0,0,0,0,11,0,36,0,0,0,0,0,0,0,16,0,0,0,21,12,0,0,119,111,114,100,47,116,104,101,109,101,47,10,0,32,0,0,0,0,0,1,0,24,0,33,210,89,80,51,88,214,1,55,51,165,250,103,94,214,1,20,171,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,38,109,238,80,107,155,19,119,133,3,0,0,167,17,0,0,21,0,36,0,0,0,0,0,0,0,32,0,0,0,62,12,0,0,119,111,114,100,47,116,104,101,109,101,47,116,104,101,109,101,49,46,120,109,108,10,0,32,0,0,0,0,0,1,0,24,0,61,255,88,74,203,89,214,1,178,102,29,133,232,89,214,1,33,210,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,61,109,238,80,122,219,27,192,146,0,0,0,183,0,0,0,20,0,36,0,0,0,0,0,0,0,32,0,0,0,246,15,0,0,119,111,114,100,47,119,101,98,83,101,116,116,105,110,103,115,46,120,109,108,10,0,32,0,0,0,0,0,1,0,24,0,235,108,72,101,203,89,214,1,219,130,21,251,103,94,214,1,33,210,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,0,0,24,104,236,80,0,0,0,0,0,0,0,0,0,0,0,0,11,0,36,0,0,0,0,0,0,0,16,0,0,0,186,16,0,0,119,111,114,100,47,95,114,101,108,115,47,10,0,32,0,0,0,0,0,1,0,24,0,241,53,89,80,51,88,214,1,25,12,165,250,103,94,214,1,224,14,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,32,109,238,80,233,249,193,147,123,0,0,0,155,0,0,0,29,0,36,0,0,0,0,0,0,0,32,0,0,0,227,16,0,0,119,111,114,100,47,95,114,101,108,115,47,102,111,111,116,110,111,116,101,115,46,120,109,108,46,114,101,108,115,10,0,32,0,0,0,0,0,1,0,24,0,87,230,96,67,203,89,214,1,188,141,29,133,232,89,214,1,241,53,89,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,14,109,238,80,32,16,105,98,121,1,0,0,100,6,0,0,19,0,36,0,0,0,0,0,0,0,32,0,0,0,153,17,0,0,91,67,111,110,116,101,110,116,95,84,121,112,101,115,93,46,120,109,108,10,0,32,0,0,0,0,0,1,0,24,0,69,165,107,47,203,89,214,1,227,47,85,246,103,94,214,1,198,192,88,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,0,0,24,104,236,80,0,0,0,0,0,0,0,0,0,0,0,0,6,0,36,0,0,0,0,0,0,0,16,0,0,0,67,19,0,0,95,114,101,108,115,47,10,0,32,0,0,0,0,0,1,0,24,0,217,231,88,80,51,88,214,1,3,5,172,247,103,94,214,1,198,192,88,80,51,88,214,1,80,75,1,2,63,0,20,0,0,0,8,0,23,109,238,80,42,73,130,205,226,0,0,0,76,2,0,0,11,0,36,0,0,0,0,0,0,0,32,0,0,0,103,19,0,0,95,114,101,108,115,47,46,114,101,108,115,10,0,32,0,0,0,0,0,1,0,24,0,153,114,232,58,203,89,214,1,96,71,139,59,203,89,214,1,217,231,88,80,51,88,214,1,80,75,5,6,0,0,0,0,12,0,12,0,143,4,0,0,114,20,0,0,0,0};
    // [END]

    std::wstring sTmpFilePath = sDirectory + L"/tmp";
    NSFile::CFileBinary oTmpFile;
    if (oTmpFile.CreateFileW(sTmpFilePath))
    {
        oTmpFile.WriteFile(template_binary, (DWORD)template_binary_len);
        oTmpFile.CloseFile();
    }

    COfficeUtils oUtils;
    bool bResult = (S_OK == oUtils.ExtractToDirectory(sTmpFilePath, sDirectory, NULL, 0)) ? true : false;

    NSFile::CFileBinary::Remove(sTmpFilePath);
    return bResult;
}

#endif // _FB2FILE_TEMPLATE_H
