#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 /* FLAW: Do not check the return value */
 fputc((int)'', VAR2);
 }
}
#endif
