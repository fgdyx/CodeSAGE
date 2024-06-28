#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 /* FLAW: fread() might fail, in which case the return value will not be equal to 100-1,
 * but we are checking to see if the return value is equal to 0 */
 if (fread((char *)VAR3, sizeof(char), (VAR4)(100-1), stdin) == 0)
 {
 FUN3("");
 }
 }
 }
}
#endif
