int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 int VAR4;
 char VAR5[10];
 VAR1 = 0;
 VAR2 = 9;
 VAR3 = 9 - (9 - 1);
 VAR4 = VAR1;
 for( ; VAR4 <= VAR2; VAR4 += VAR3)
 {
 VAR5[VAR4] = '';
 }
 return 0;
}
