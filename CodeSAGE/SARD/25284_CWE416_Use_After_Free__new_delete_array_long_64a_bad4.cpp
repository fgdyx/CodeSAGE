#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = new long[100];
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR3;
 FUN1(&VAR3);
}
#endif
