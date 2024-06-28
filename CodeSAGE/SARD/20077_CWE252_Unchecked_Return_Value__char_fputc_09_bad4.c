#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 /* FLAW: Do not check the return value */
 fputc((int)'', VAR3);
 }
}
#endif
