#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = new int[100];
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5;
 }
 }
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR2;
 }
 if(5==5)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(VAR2[0]);
 }
}
#endif
