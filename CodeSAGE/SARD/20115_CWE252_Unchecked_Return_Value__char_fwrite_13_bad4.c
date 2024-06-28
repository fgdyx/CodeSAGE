#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 /* FLAW: Do not check the return value */
 fwrite((char *)"", sizeof(char), strlen(""), VAR3);
 }
}
#endif
