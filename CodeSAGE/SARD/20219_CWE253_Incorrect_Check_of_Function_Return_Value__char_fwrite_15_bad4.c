#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 /* FLAW: fwrite() might fail, in which case the return value will not be equal to strlen(data),
 * but we are checking to see if the return value is less than 0 */
 if (fwrite((char *)"", sizeof(char), strlen(""), VAR2) < 0)
 {
 FUN2("");
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
