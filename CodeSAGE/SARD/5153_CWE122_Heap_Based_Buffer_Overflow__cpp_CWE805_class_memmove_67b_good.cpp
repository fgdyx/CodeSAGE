#ifndef VAR1
void FUN1(structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 {
 TwoIntsClass VAR6[100];
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 0;
 VAR6[VAR7].VAR9 = 0;
 }
 }
 memmove(VAR4, VAR6, 100*sizeof(VAR3));
 FUN2(VAR4[0].VAR8);
 delete [] VAR4;
 }
}
#endif
