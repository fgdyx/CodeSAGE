#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 /* FLAW: Do not check the return value */
 fwrite((char *)"", sizeof(char), strlen(""), VAR2);
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
