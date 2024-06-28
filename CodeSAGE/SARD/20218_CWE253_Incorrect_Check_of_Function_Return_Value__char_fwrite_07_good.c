#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR3) != strlen(""))
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 if(VAR2==5)
 {
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR3) != strlen(""))
 {
 FUN2("");
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
