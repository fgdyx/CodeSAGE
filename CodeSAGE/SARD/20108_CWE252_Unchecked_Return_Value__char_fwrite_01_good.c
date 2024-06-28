#ifndef VAR1
static void FUN1()
{
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR2) != strlen(""))
 {
 FUN2("");
 }
}
void FUN3()
{
 FUN1();
}
#endif
