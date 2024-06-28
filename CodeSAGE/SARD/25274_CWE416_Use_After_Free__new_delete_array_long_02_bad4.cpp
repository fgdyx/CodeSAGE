#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new long[100];
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5L;
 }
 }
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR2;
 }
 if(1)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(VAR2[0]);
 }
}
#endif
