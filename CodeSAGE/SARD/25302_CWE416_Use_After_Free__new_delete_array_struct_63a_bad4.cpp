#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 VAR4 = new VAR2[100];
 {
 size_t VAR5;
 for(VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 1;
 VAR4[VAR5].VAR7 = 2;
 }
 }
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR4;
 FUN1(&VAR4);
}
#endif
