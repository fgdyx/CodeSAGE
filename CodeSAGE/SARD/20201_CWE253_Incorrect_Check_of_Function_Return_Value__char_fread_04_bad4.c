#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 /* FLAW: fread() might fail, in which case the return value will not be equal to 100-1,
 * but we are checking to see if the return value is equal to 0 */
 if (fread((char *)VAR4, sizeof(char), (VAR5)(100-1), stdin) == 0)
 {
 FUN2("");
 }
 }
 }
}
#endif
