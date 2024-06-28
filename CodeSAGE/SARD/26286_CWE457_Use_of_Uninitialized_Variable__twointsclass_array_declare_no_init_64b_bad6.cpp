#ifndef VAR1
void FUN1(void * VAR2)
{
 VAR3 * * VAR4 = (VAR3 * *)VAR2;
 VAR3 * VAR5 = (*VAR4);
 /* POTENTIAL FLAW: Use data without initializing it */
 for(int VAR6=0; VAR6<10; VAR6++)
 {
 FUN2(VAR5[VAR6].VAR7);
 FUN2(VAR5[VAR6].VAR8);
 }
}
#endif
