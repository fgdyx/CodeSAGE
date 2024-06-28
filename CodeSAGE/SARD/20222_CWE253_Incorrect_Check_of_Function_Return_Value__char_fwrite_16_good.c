#ifndef VAR1
static void FUN1()
{
 while(1)
 {
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR2) != strlen(""))
 {
 FUN2("");
 }
 break;
 }
}
void FUN3()
{
 FUN1();
}
#endif
