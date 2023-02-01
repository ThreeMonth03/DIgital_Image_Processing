#pragma pack(2)//Reduce the blank between the variable.
struct BmpFileHeader{
    uint16_t bfTybe = 0x424D;//Check if it is {'B','M'}
    uint32_t bfSize;//The size of BMP_file
    uint16_t bfReserved1 = 0;
    uint16_t bfReserved2 = 0;
    uint32_t bfOffBits = 54;//14(BmpFileHeader)+40(BmpInfoHeader) If it is grayscale image, adding extra 1024(Palette)
};
struct BmpInfoHeader{
    uint32_t biSize = 40;//The size of BmpInfoHeader
    uint32_t biWidth;//The width of the picture
    uint32_t biHeight;//The height of the picture
    uint16_t biPlanes = 1; // 1=defeaul, 0=custom
    uint16_t biBitCount;//RGB=24,
    uint32_t biCompression = 0;
    uint32_t biSizeImage = 0;//The number of the pixel(RGB*3)
    uint32_t biXPelsPerMeter = 0; // 72dpi=2835, 96dpi=3780
    uint32_t biYPelsPerMeter = 0; // 120dpi=4724, 300dpi=11811
    uint32_t biClrUsed = 0;//The number of the color in the Palette
    uint32_t biClrImportant = 0;
};
#pragma pack() 

struct basic_ImgData{
    std::vector<unsigned char> raw_img;
	uint32_t width;
	uint32_t height;
	uint16_t bits;
};

class ImgData: public basic_ImgData {

};