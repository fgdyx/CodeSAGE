#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int VAR3;
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR3);
}
#endif
