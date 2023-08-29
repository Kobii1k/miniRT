#include "../../../inc/structure.h"
#include "../../../inc/filling_ft.h"

#include "stdio.h"

void	init_filling_ft(t_minirt_data * data_pt)
{
	fill_a(data_pt, INIT);
	fill_c(data_pt, INIT);
	fill_l(data_pt, INIT);
	fill_sp(data_pt, INIT);
	fill_pl(data_pt, INIT);
	fill_cy(data_pt, INIT);
    fill_co(data_pt, INIT);
    fill_di(data_pt, INIT);
}

bool	fill_di(void *data_pt, int flag)
{
	static t_disk *disk_arr;

	if (flag == INIT)
	{
		disk_arr = ((t_minirt_data *)data_pt)->disk_arr;
		return (true);
	}
	if (get_line_data_di((char *)data_pt, disk_arr) == false)
		return (false);
	disk_arr++;
	return (true);
}

bool	fill_co(void *data_pt, int flag)
{
	static t_cone *cone_arr;

	if (flag == INIT)
	{
		cone_arr = ((t_minirt_data *)data_pt)->cone_arr;
		return (true);
	}
	if (get_line_data_co((char *)data_pt, cone_arr) == false)
		return (false);
	cone_arr++;
	return (true);
}

bool	fill_a(void *data_pt, int flag)
{
	static t_ambient_light *ambient_light_arr;

	if (flag == INIT)
	{
		ambient_light_arr = ((t_minirt_data *)data_pt)->ambient_light;
		return (true);
	}
	ambient_light_arr->ratio = 0;
	if (get_line_data_a((char *)data_pt, ambient_light_arr) == false)
		return (false);
	ambient_light_arr++;
	return (true);
}

bool	fill_c(void *data_pt, int flag)
{
	static t_camera *camera_arr;

	if (flag == INIT)
	{
		camera_arr= ((t_minirt_data *)data_pt)->camera;
		return (true);
	}
	if (get_line_data_c((char *)data_pt, camera_arr) == false)
		return (false);
	camera_arr++;
	return (true);
}

bool	fill_l(void *data_pt, int flag)
{
	static t_light *light_arr;

	if (flag == INIT)
	{
		light_arr = ((t_minirt_data *)data_pt)->lights_arr;
		return (true);
	}
	if (get_line_data_l((char *)data_pt, light_arr) == false)
		return (false);
	light_arr++;
	return (true);
}

bool	fill_sp(void *data_pt, int flag)
{
	static t_sphere *sphere_arr;

	if (flag == INIT)
	{
		sphere_arr = ((t_minirt_data *)data_pt)->sphere_arr;
		return (true);
	}
	if (get_line_data_sp((char *)data_pt, sphere_arr) == false)
		return (false);
	sphere_arr++;
	return (true);
}

bool	fill_pl(void *data_pt, int flag)
{
	static t_plane *plane_arr;

	if (flag == INIT)
	{
		plane_arr = ((t_minirt_data *)data_pt)->plane_arr;
		return (true);
	}
	if (get_line_data_pl((char *)data_pt, plane_arr) == false)
		return (false);
	plane_arr++;
	return (true);
}

bool	fill_cy(void *data_pt, int flag)
{
	static t_cylinder *cylinder_arr;

	if (flag == INIT)
	{
		cylinder_arr = ((t_minirt_data *)data_pt)->cylinder_arr;
		return (true);
	}
	if (get_line_data_cy((char *)data_pt, cylinder_arr) == false)
		return (false);
	cylinder_arr++;
	return (true);
}
