#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 /* FLAW: Do not check the return value */
 fprintf(VAR2, "", "");
 }
}
#endif
