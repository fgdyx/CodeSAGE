#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
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
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR3[VAR6] = VAR5[VAR6];
 }
 FUN2(VAR3[0].VAR7);
 delete [] VAR3;
 }
 }
}
#endif
