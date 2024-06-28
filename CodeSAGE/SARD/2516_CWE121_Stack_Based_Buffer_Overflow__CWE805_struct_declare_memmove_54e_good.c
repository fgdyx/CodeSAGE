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
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(&VAR3[0]);
 }
}
#endif
