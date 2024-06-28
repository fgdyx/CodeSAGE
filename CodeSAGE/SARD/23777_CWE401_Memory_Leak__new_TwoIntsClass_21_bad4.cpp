#ifndef VAR1
static int VAR2 = 0;
static void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = new VAR3;
 VAR4->VAR5 = 0;
 VAR4->VAR6 = 0;
 FUN3(VAR4->VAR5);
 FUN3(VAR4->VAR6);
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
