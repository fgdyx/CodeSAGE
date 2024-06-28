#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 struct VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR5 = new struct VAR4;
 VAR5->VAR6 = 0;
 VAR5->VAR7 = 0;
 FUN2((VAR8 *)VAR5);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
