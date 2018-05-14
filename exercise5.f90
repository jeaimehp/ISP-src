program exercise5
implicit none
real :: a, b, c, v
character (len=10) :: name
print *, 'Enter your name:'
read *, name
print *, 'Enter values for a, b, and c with commas seperating them'
read *, a, b, c 
print *, 'Hello,',name
v = (4/3) * 3.14 * a**3
print *, 'The volume of a sphere with radius a= ', a , 'is ', v
print *, 'The volume of a cuble is ', a*b*c


end program
