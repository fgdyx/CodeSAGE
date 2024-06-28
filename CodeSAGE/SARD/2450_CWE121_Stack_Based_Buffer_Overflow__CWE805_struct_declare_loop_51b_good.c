#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 {
 twoIntsStruct VAR4[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 0;
 VAR4[VAR5].VAR6 = 0;
 }
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN2(&VAR3[0]);
 }
 }
}
#endif
