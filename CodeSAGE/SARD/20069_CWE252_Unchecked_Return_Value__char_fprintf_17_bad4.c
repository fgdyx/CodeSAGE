#ifndef VAR1
void FUN1()
{
 int VAR2;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Do not check the return value */
 fprintf(VAR3, "", "");
 }
}
#endif
