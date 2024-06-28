#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 /* FLAW: Do not check the return value */
 fputc((int)'', VAR2);
 }
 else
 {
 if (fputc((int)'', VAR2) == VAR3)
 {
 FUN3("");
 }
 }
}
#endif
