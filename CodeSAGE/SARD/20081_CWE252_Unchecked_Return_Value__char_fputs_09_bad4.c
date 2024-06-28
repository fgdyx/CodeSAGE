#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 /* FLAW: Do not check the return value */
 fputs("", VAR3);
 }
}
#endif
