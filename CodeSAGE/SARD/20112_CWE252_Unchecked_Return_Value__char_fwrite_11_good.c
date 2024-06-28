#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR2) != strlen(""))
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR2) != strlen(""))
 {
 FUN3("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
