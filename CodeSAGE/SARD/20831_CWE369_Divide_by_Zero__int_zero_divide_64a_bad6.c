#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* POTENTIAL FLAW: Set data to zero */
 VAR3 = 0;
 FUN1(&VAR3);
}
#endif
