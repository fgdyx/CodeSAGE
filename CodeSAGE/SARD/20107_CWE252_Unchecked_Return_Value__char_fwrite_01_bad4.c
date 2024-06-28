#ifndef VAR1
void FUN1()
{
 /* FLAW: Do not check the return value */
 fwrite((char *)"", sizeof(char), strlen(""), VAR2);
}
#endif
