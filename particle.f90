! How fast a particle will fall through water

program particle
implicit none

real :: rho_s = 2.7     ! particle density
real :: rho_l = 1.0     ! water density
real :: D = 0.01        ! partile diameter
real :: g = 981         ! acceleration due to gravity
real :: n = 0.01        ! viscosity
real :: v               ! velocity

v = ((rho_s - rho_l)*(D**2)*g)/(18*n)

print *, v

end program particle 
 

