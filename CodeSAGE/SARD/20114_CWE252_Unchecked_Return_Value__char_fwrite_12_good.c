#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR2) != strlen(""))
 {
 FUN3("");
 }
 }
 else
 {
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR2) != strlen(""))
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
