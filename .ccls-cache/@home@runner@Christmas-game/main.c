#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void musicPrint(char title[256], char author[256]);
void msgPrint(char msg[256], char author[256]);

int main(void) {
  for (int i = 0; i <20; i++  ) {
      printf("๐");
  }
  printf("\n\n\n");

  int number;
  printf("๐ ํธ๋ฆฌ ๋ฒํธ๋ฅผ ์ ํํด์ฃผ์ธ์! ");
  scanf("%d", &number);
  if (number == 0 || number > 6) {
    printf("์ฌ๋ฐ๋ฅธ ๋ฒํธ๋ฅผ ์ ํํด์ฃผ์ธ์ ๐ฅ");
    scanf("%d", &number);
    
  } else if(number >= 1 && number <= 5) {
    
    printf("\n์ ๋ฌผ์ด ๋ฌด์์ผ๊น์?๐\n\n");
    printf("ํ์ธํด๋ณด์ธ์!\n\n");
    
    for(int j = 0; j < 3; j++) {
      printf("๐\n\n");
    }
    
    srand(time(NULL));
    int num = rand() % 2;
    if (num == 0) {
      printf("๋น์ ์ ์ ๋ฌผ์ ํฌ์ถ ์ฟ ํค ๋ฉ์ธ์ง์๋๋ค ๐ค\n\n");
      srand(time(NULL));
      int msgNumber = rand() % 4;
      if(msgNumber == 0) {
        msgPrint("ํฌ๋ฆฌ์ค๋ง์ค๋ ๋ง๋ฒ ์งํก์ด๋ฅผ ์จ ์ธ๊ณ์ ํ๋ ๋ค. ๊ทธ๋ฆฌ๊ณ  ๋ณด์๋ผ, ๋ชจ๋  ๊ฒ์ด ๋ถ๋๋ฌ์์ง๊ณ  ๋ ์๋ฆ๋ค์์ง๋ค. ", "- ๋ธ๋จผ ๋น์ผํธ ํ -");
      }
      if(msgNumber == 1) {
        msgPrint("ํฌ๋ฆฌ์ค๋ง์ค๋ ์ฌํ๊ณผ๋ ๊ฐ๋ค. ๊ทธ๊ฒ์ ๋น์ ์ ์์์ ์ฒ์ฒํ ๋น์ ๋ชจ๋  ๋ฏธ๋ขฐ๋ฅผ ๋ฌ์ฝคํ๊ฒ ํ๊ณ  ๋น์ ์ ์์์ด ์์ํ ๋จ๋๋ก ๋ง๋ ๋ค. ", "- ๋ฆฌ์ E. ๊ตฟ๋ฆฌ์น -");
      }
      if(msgNumber == 2) {
        msgPrint("์ ์ ํฌ๋ฆฌ์ค๋ง์ค๊ฐ ํ๋ณตํ ์๊ฐ์ด ๋์ด์ผ ํ๋ค๋ ๊ฒ์ ์ฐ๋ฆฌ์๊ฒ ์๊ธฐ์ํค๊ธฐ ์ํด ์ฐํํด๋ก์ค๋ฅผ ์ง๊ตฌ์ ๋์๋ค. ", "- ๋น ํจ -");
      }
      if(msgNumber == 3) {
        msgPrint("ํฌ๋ฆฌ์ค๋ง์ค ์ด๋ธ๋ ๋น์ ์ ์์ฒ๋ผ ๊ฐ์ธ๋ ๋ธ๋์ ๋ฐค์ด์๋ค. ํ์ง๋ง ๊ทธ๊ฒ์ ๋น์ ์ ๋ชธ๋ณด๋ค๋ ๋ฐ๋ปํ๊ฒ ํ๋ค. ๊ทธ๊ฒ์ ๋น์ ์ ์ฌ์ฅ์ ๋ฐ๋ปํ๊ฒ ํ๊ณ  ๊ฐ๋ ์ฑ์ฐ๊ธฐ๋ ํ๋ค. ์์ํ ๋จธ๋ฌด๋ฅผ ๋ฉ๋ก๋๋ก.", "- ๋ฒ ์ค ์คํธ๋ฆฌํฐ ์๋๋ฆฌ์น -");
      }
    }
    if (num == 1) {
      printf("๋น์ ์๊ฒ ๋๋ฆฌ๋ ์ ๋ฌผ์ ํฌ๋ฆฌ์ค๋ง์ค ๋ธ๋์๋๋ค ๐ต\n\n");
      srand(time(NULL));
      int musicNumber = rand() % 7;
      if (musicNumber == 0) {
        musicPrint("Christmas without you", "AVA MAX");
      }
      if (musicNumber == 1) {
        musicPrint("Mistletoe", "Justin bieber");
      }
      if (musicNumber == 2) {
        musicPrint("Think of Christmas", "Anne-marie");
      }
      if (musicNumber == 3) {
        musicPrint("Rockin around the christmas", "");
      }
      if (musicNumber == 4) {
        musicPrint(("Last Christmas"), "Wham!");
      }
      if (musicNumber == 5) {
        musicPrint("My kind of present", "Meghantrainor");
      }
      if (musicNumber == 6) {
        musicPrint("25th", "Tori kelly");
      }
      
     
    }
    
  }
  return 0;
}

void musicPrint(char title[256], char author[256]) {
  printf("๊ณก ์ด๋ฆ: %s\n\n", title);
  printf("์ํฐ์คํธ: %s", author);
}

void msgPrint(char msg[256], char author[256]) {
  printf("%s\n\n", msg);
  printf("%s", author);
}
