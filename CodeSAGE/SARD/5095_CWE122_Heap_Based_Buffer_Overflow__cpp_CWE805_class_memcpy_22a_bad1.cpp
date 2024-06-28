#ifndef VAR1
int VAR2 = 0;
VAR3 * FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR2 = 1;
 VAR4 = FUN1(VAR4);
 {
 TwoIntsClass VAR5[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 0;
 VAR5[VAR6].VAR8 = 0;
 }
 }
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 memcpy(VAR4, VAR5, 100*sizeof(VAR3));
 FUN3(VAR4[0].VAR7);
 delete [] VAR4;
 }
 ;
}
#endif
