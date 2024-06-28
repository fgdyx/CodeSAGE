#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5)
{
 {
 size_t VAR6,VAR7;
 int *VAR8;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR6 = VAR5 * sizeof(int);
 VAR8 = (int*)new char[VAR6];
 for (VAR7 = 0; VAR7 < (VAR9)VAR5; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 FUN2(VAR8[0]);
 delete [] VAR8;
 }
}
}
#endif
